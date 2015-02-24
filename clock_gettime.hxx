#ifndef linux_clock_gettime_hxx_
#define linux_clock_gettime_hxx_

#include "EFAULT.h"
#include "EINVAL.h"
#include "SYS_clock_gettime.h"
#include "clockid_t.h"
#include "struct-timespec.h"

#include "linux/Result.hxx"
#include "_internal/_c_syscall2.h"

namespace linux {

static inline
auto
clock_gettime(clockid_t clk_id, struct timespec* tp) noexcept
{
    enum Error
    {
        // `tp` points outside the accessible address space.
        EFAULT_ = EFAULT,

        // The `clk_id` specified is not supported on this system.
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(_c_syscall2(SYS_clock_gettime, clk_id, tp));
}

} // namespace linux

#endif
