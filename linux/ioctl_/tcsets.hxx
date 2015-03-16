#pragma once

#include "TCSETS.h"
#include "struct-termios.h"

#include "../ioctl.hxx"

namespace linux { namespace ioctl_ {

// Set the current serial port settings.
static inline
auto
tcsets(int fd, const struct termios* buffer) noexcept
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