#pragma once

#include "EFAULT.h"
#include "EINVAL.h"
#include "SYS_get_thread_area.h"
#include "struct-user_desc.h"
#include "__syscall1.h"

#include "Result.hxx"

namespace linux {

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

    return Result<void, Error>(__syscall1(SYS_get_thread_area, u_info));
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

    return Result<void, Error>(__syscall1(SYS_get_thread_area, &u_info));
}

}
