#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/SYS_get_thread_area.h"
#include "c/struct user_desc.h"

#include "Result.hxx"

namespace os {

static inline
auto
get_thread_area(struct user_desc* u_info) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_get_thread_area, u_info);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
