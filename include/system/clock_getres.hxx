#pragma once

#include "c/SYS_clock_getres.h"
#include "c/clockid_t.h"
#include "c/struct-timespec.h"
#include "Result.hxx"

namespace system {

static inline
auto
clock_getres(clockid_t clk_id, struct timespec* res) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
        _(EFAULT),
        _(EINVAL),
#endif
    };
#undef _

    return Result<void, Error>(SYS_clock_getres, clk_id, res);
}

}
