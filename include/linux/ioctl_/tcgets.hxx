#ifndef linux_ioctl_tcgets_hxx_
#define linux_ioctl_tcgets_hxx_

#include "linux/TCGETS.h"
#include "linux/struct-termios.h"

#include "linux/ioctl.hxx"

namespace linux {
namespace ioctl_ {

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

} // namespace ioctl_
} // namespace linux

#endif
