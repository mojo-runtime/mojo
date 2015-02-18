#ifndef linux_ioctl_tcsets_hxx_
#define linux_ioctl_tcsets_hxx_

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ENOTTY.h"
#include "c/SYS_ioctl.h"
#include "c/TCSETS.h"
#include "c/struct-termios.h"
#include "c/_c_syscall3.h"

#include "linux/Result.hxx"

namespace linux {
namespace ioctl {

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

    return Result<void, Error>(_c_syscall3(SYS_ioctl, fd, TCGETS, buffer));
}

} // namespace ioctl
} // namespace linux

#endif
