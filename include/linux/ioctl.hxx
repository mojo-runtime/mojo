#ifndef linux_ioctl_hxx_
#define linux_ioctl_hxx_

#include "linux/_c_syscall3.h"
#include "linux/EBADF.h"
#include "linux/EFAULT.h"
#include "linux/EINVAL.h"
#include "linux/ENOTTY.h"
#include "linux/SYS_ioctl.h"

#include "linux/Result.hxx"

namespace linux {

// The type of `request` varies from man page to man page.
// We'll use `int`, as will the constants in the C headers.
// See: https://sourceware.org/bugzilla/show_bug.cgi?id=14362

template <typename Arg>
static inline
auto
ioctl(int fd, int request, Arg arg) noexcept
{
    enum Error
    {
        // `d` is not a valid descriptor.
        EBADF_ = EBADF,

        // `argp` references an inaccessible memory area.
        EFAULT_ = EFAULT,

        // `request` is not valid.
        //
        // `argp` is not valid.
        EINVAL_ = EINVAL,

        // `d` is not associated with a character special device.
        //
        // The specified request does not apply to the kind of object
        // that the descriptor `d` references.
        ENOTTY_ = ENOTTY,
    };

    return Result<void, Error>(_c_syscall3(SYS_ioctl, fd, request, arg));
}

} // namespace linux

#endif
