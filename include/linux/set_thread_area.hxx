#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ESRCH.h"
#include "c/SYS_set_thread_area.h"
#include "c/struct user_desc.h"

namespace linux {

static inline
auto
set_thread_area(struct user_desc* u_info) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINVAL),
        _(ESRCH),
#undef _
    };

    return Result<void, Error>(SYS_set_thread_area, u_info);
}

}
