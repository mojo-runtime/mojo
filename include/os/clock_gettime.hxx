#pragma once

#include "c/clockid_t.h"
#include "c/struct timespec.h"
#include "Result.hxx"

namespace os {

static inline
auto
clock_gettime(clockid_t clk_id, struct timespec* tp) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
        _(EINVAL),
    };

#  undef _
#  include "c/SYS_clock_gettime.h"

    return Result<void, Error>(SYS_clock_gettime, clk_id, tp);

#else
#  error
#endif
}

}
