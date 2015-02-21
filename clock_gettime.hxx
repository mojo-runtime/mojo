#ifndef linux_clock_gettime_hxx_
#define linux_clock_gettime_hxx_

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_clock_gettime.h"
#include "c/clockid_t.h"
#include "c/struct-timespec.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
clock_gettime(clockid_t clk_id, struct timespec* tp) noexcept
{
    enum Error
    {
        // `tp` points outside the accessible address space.
        EFAULT = EFAULT,

        // The `clk_id` specified is not supported on this system.
        EINVAL = EINVAL,
    };

    return Result<void, Error>(_c_syscall2(SYS_clock_gettime, clk_id, tp));
}

} // namespace linux

#endif
