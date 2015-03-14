#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/SYS_clock_settime.h"
#include "c/clockid_t.h"
#include "c/struct-timespec.h"

#include "Result.hxx"
#include "abi/syscall-2.hxx"

namespace linux {

static inline
auto
clock_settime(clockid_t clk_id, const struct timespec* tp) noexcept
{
    enum Error
    {
        // `tp` points outside the accessible address space.
        EFAULT_ = EFAULT,

        // The `clk_id` specified is not supported on this system.
        EINVAL_ = EINVAL,

        // `clock_settime()` does not have permission to set the clock indicated.
        EPERM_ = EPERM,
    };

    return Result<void, Error>(abi::syscall(SYS_clock_settime, clk_id, tp));
}

}
