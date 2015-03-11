#ifndef _os_linux_clock_gettime_hxx_
#define _os_linux_clock_gettime_hxx_

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_clock_gettime.h"
#include "c/clockid_t.h"
#include "c/struct-timespec.h"

#include "Result.hxx"
#include "__call-2.hxx"

namespace os { inline namespace _linux_ {

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

    return Result<void, Error>(__call(SYS_clock_gettime, clk_id, tp));
}

}}

#endif
