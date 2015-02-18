#ifndef linux_ioctl_tcsets_hxx_
#define linux_ioctl_tcsets_hxx_

#include "c/TCSETS.h"
#include "c/struct-termios.h"

#include "linux/ioctl.hxx"

namespace linux {
namespace ioctl_ {

// Set the current serial port settings.
static inline
auto
tcsets(int fd, const struct termios* buffer) noexcept
{
    enum Error
    {
        EBADF  = EBADF,  // bad `fd`
        EFAULT = EFAULT, // bad `buffer`
        //     = EINVAL, // bad `TCGETS`
        ENOTTY = ENOTTY, // `fd` is not a terminal descriptor
    };

    return ioctl(fd, TCGETS, buffer)._with_error<Error>();
}

} // namespace ioctl_
} // namespace linux

#endif
