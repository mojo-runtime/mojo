#ifndef linux_clock_getres_hxx_
#define linux_clock_getres_hxx_

#include "abi/_abi_syscall_2.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_clock_getres.h"
#include "c/clockid_t.h"
#include "c/struct-timespec.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
clock_getres(clockid_t clk_id, const struct timespec* tp) noexcept
{
    enum Error
    {
        // `tp` points outside the accessible address space.
        EFAULT_ = EFAULT,

        // The `clk_id` specified is not supported on this system.
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(_abi_syscall_2(SYS_clock_getres, clk_id, tp));
}

} // namespace linux

#endif
