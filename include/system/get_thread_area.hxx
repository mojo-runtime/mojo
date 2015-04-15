// -*- C++ -*-
#pragma once

#include "c/struct user_desc.h"
#include "Result.hxx"

namespace system {

static inline
auto
get_thread_area(struct user_desc* u_info) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
        _(EINVAL),
    };

#  undef _
#  include "c/SYS_get_thread_area.h"

    return Result<void, Error>(SYS_get_thread_area, u_info);

#else
#  error
#endif
}

}
