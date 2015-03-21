#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOTTY.h"
#include "c/SYS_ioctl.h"

#include "Result.hxx"

namespace os {

template <typename Arg>
static inline
auto
ioctl(int d, unsigned long request, Arg arg) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ENOTTY),
#undef _
    };

    return Result<void, Error>(SYS_ioctl, d, request, arg);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
