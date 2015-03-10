#ifndef linux_set_thread_area_hxx_
#define linux_set_thread_area_hxx_

#include "linux/_syscall_1.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ESRCH.h"
#include "c/SYS_set_thread_area.h"
#include "linux/struct-user_desc.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
set_thread_area(struct user_desc* u_info) noexcept
{
    enum Error
    {
        // `u_info` is an invalid pointer.
        EFAULT_ = EFAULT,

        // `u_info->entry_number` is out of bounds.
        EINVAL_ = EINVAL,

        // A free TLS entry count not be located.
        ESRCH_ = ESRCH,
    };

    return Result<void, Error>(_syscall_1(SYS_set_thread_area, u_info));
}

} // namespace linux

#endif
