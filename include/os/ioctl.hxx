#pragma once

#include "Result.hxx"

namespace os {

template <typename Arg>
static inline
auto
ioctl(int d, unsigned long request, Arg arg) noexcept
{
#if defined(__linux__) || defined(__FreeBSD__) // Same errors
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/ENOTTY.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ENOTTY),
    };

#  undef _
#  include "c/SYS_ioctl.h"

    return Result<void, Error>(SYS_ioctl, d, request, arg);

#else
#  error
#endif
}

}
