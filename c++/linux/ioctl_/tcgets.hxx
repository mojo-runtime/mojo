#pragma once

#include "TCGETS.h"
#include "struct-termios.h"

#include "../ioctl.hxx"

namespace linux { namespace ioctl_ {

// Get the current serial port settings.
static inline
auto
tcgets(int fd, struct termios* buffer) noexcept
{
    enum Error
    {
        EBADF_ = EBADF,  // bad `fd`
        EFAULT_ = EFAULT, // bad `buffer`
        //    _ = EINVAL, // bad `TCGETS`
        ENOTTY_ = ENOTTY, // `fd` is not a terminal descriptor
    };

    return ioctl(fd, TCGETS, buffer)._with_error<Error>();
}

}}
