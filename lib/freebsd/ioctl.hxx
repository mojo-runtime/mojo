#pragma once

#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/ENOTTY.h"
#include "Result.hxx"

#define __NR_ioctl 54

namespace freebsd {

// The type of `request` varies from man page to man page.
// See: https://sourceware.org/bugzilla/show_bug.cgi?id=14362

template <typename Arg>
static inline
auto
ioctl(int fd, int request, Arg arg) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(FAULT),
        _E(INVAL),
        _E(NOTTY),
    };

    return Result<void, Error>(__NR_ioctl, fd, request, arg);
}

}
