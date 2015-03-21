#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_clock_getres.h"
#include "c/clockid_t.h"
#include "c/struct timespec.h"

#include "Result.hxx"

namespace os {

static inline
auto
clock_getres(clockid_t clk_id, struct timespec* res) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_clock_getres, clk_id, res);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
