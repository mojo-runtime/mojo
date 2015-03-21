#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/SYS_clock_settime.h"
#include "c/clockid_t.h"
#include "c/struct timespec.h"

namespace linux {

static inline
auto
clock_settime(clockid_t clk_id, const struct timespec* tp) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINVAL),
        _(EPERM),
#undef _
    };

    return Result<void, Error>(SYS_clock_settime, clk_id, tp);
}

}
