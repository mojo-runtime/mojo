#ifndef linux_epoll_ctl_hxx_
#define linux_epoll_ctl_hxx_

#include "linux/_c_syscall4.h"
#include "linux/EBADF.h"
#include "linux/EEXIST.h"
#include "linux/EINVAL.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOSPC.h"
#include "linux/EPERM.h"
#include "linux/SYS_epoll_ctl.h"
#include "linux/struct-epoll_event.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
epoll_ctl(int epfd, int op, int fd, struct epoll_event* event) noexcept
{
    enum Error
    {
        // `epfd` or `fd` is not a valid file descriptor.
        EBADF_ = EBADF,

        // `op` was EPOLL_CTL_ADD, and the supplied file descriptor
        // `fd` is already registered with this epoll instance.
        EEXIST_ = EEXIST,

        // `epfd` is not an epoll file descriptor.
        //
        // `fd` is the same as `epfd`.
        //
        // The requested operation `op` is not supported by this interface.
        EINVAL_ = EINVAL,

        // `op` was EPOLL_CTL_MOD or EPOLL_CTL_DEL, and
        // `fd` is not registered with this epoll instance.
        ENOENT_ = ENOENT,

        // There was insufficient memory to handle the requested `op` control operation.
        ENOMEM_ = ENOMEM,

        // The limit imposed by /proc/sys/fs/epoll/max_user_watches
        // was encountered while trying to register (EPOLL_CTL_ADD)
        // a new file descriptor on an epoll instance.
        ENOSPC_ = ENOSPC,

        // The target file `fd` does not support epoll.
        EPERM_ = EPERM,
    };

    return Result<void, Error>(_c_syscall4(SYS_epoll_ctl, epfd, op, fd, event));
}

} // namespace linux

#endif
