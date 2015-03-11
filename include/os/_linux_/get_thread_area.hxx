#ifndef _os_linux_get_thread_area_hxx_
#define _os_linux_get_thread_area_hxx_

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_get_thread_area.h"
#include "c/struct-user_desc.h"

#include "Result.hxx"
#include "__call-1.hxx"

namespace os { inline namespace _linux_ {

static inline
auto
get_thread_area(struct user_desc* u_info) noexcept
{
    enum Error
    {
        // `u_info` is an invalid pointer.
        EFAULT_ = EFAULT,

        // `u_info->entry_number` is out of bounds.
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(__call(SYS_get_thread_area, u_info));
}

static inline
auto
get_thread_area(struct user_desc& u_info) noexcept
{
    enum Error
    {
        // EFAULT
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(__call(SYS_get_thread_area, &u_info));
}

}}

#endif
