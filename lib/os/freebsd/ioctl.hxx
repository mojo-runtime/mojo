#pragma once

#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/ENOTTY.h"
#include "syscall/SYS_ioctl.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

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

    return Result<void, Error>(SYS_ioctl, fd, request, arg);
}

}}
