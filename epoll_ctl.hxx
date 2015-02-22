#ifndef linux_epoll_ctl_hxx_
#define linux_epoll_ctl_hxx_

#include "c/EBADF.h"
#include "c/EEXIST.h"
#include "c/EINVAL.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/EPERM.h"
#include "c/SYS_epoll_ctl.h"
#include "c/struct-epoll_event.h"
#include "c/extension/x_syscall4.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
epoll_ctl(int epfd, int op, int fd, struct epoll_event* event) noexcept
{
    enum Error
    {
        // `epfd` or `fd` is not a valid file descriptor.
        EBADF  = EBADF,

        // `op` was EPOLL_CTL_ADD, and the supplied file descriptor
        // `fd` is already registered with this epoll instance.
        EEXIST = EEXIST,

        // `epfd` is not an epoll file descriptor, or `fd` is the same as `epfd`,
        // or the requested operation `op` is not supported by this interface.
        EINVAL = EINVAL,

        // `op` was EPOLL_CTL_MOD or EPOLL_CTL_DEL, and
        // `fd` is not registered with this epoll instance.
        ENOENT = ENOENT,

        // There was insufficient memory to handle the requested `op` control operation.
        ENOMEM = ENOMEM,

        // The limit imposed by /proc/sys/fs/epoll/max_user_watches
        // was encountered while trying to register (EPOLL_CTL_ADD)
        // a new file descriptor on an epoll instance.
        ENOSPC = ENOSPC,

        // The target file `fd` does not support epoll.
        EPERM  = EPERM,
    };

    return Result<void, Error>(x_syscall4(SYS_epoll_ctl, epfd, op, fd, event));
}

} // namespace linux

#endif
