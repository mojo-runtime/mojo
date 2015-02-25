#ifndef linux_epoll_ctl_del_hxx_
#define linux_epoll_ctl_del_hxx_

#include "linux/c/EPOLL_CTL_DEL.h"
#include "linux/c/_c_syscall3.h"

#include "linux/epoll_ctl.hxx"

namespace linux {
namespace epoll_ctl_ {

static inline
auto
del(int epfd, int fd /*, struct epoll_event* event */) noexcept
{
    enum Error
    {
        EBADF_ = EBADF,
        // EEXIST
        EINVAL_ = EINVAL,
        ENOENT_ = ENOENT,
        ENOMEM_ = ENOMEM,
        // ENOSPC
        EPERM_ = EPERM,
    };

    return Result<void, Error>(_c_syscall3(SYS_epoll_ctl, epfd, EPOLL_CTL_DEL, fd));
}

} // namespace epoll_ctl_
} // namespace linux

#endif
