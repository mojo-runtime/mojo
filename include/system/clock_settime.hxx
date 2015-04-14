#pragma once

#include "c/clockid_t.h"
#include "c/struct timespec.h"
#include "Result.hxx"

namespace system {

static inline
auto
clock_settime(clockid_t clk_id, const struct timespec* tp) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/EPERM.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
        _(EINVAL),
        _(EPERM),
    };

#  undef _
#  include "c/SYS_clock_settime.h"

    return Result<void, Error>(SYS_clock_settime, clk_id, tp);

#else
#  error
#endif
}

}
