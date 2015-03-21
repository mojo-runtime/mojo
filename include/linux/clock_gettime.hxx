#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_clock_gettime.h"
#include "c/clockid_t.h"
#include "c/struct timespec.h"

#include "Result.hxx"

namespace linux {

static inline
auto
clock_gettime(clockid_t clk_id, struct timespec* tp) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_clock_gettime, clk_id, tp);
}

}
