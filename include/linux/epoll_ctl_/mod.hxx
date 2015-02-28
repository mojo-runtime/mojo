#ifndef linux_epoll_ctl_mod_hxx_
#define linux_epoll_ctl_mod_hxx_

#include "linux/EPOLL_CTL_MOD.h"

#include "linux/epoll_ctl.hxx"

namespace linux {
namespace epoll_ctl_ {

static inline
auto
mod(int epfd, int fd, struct epoll_event* event) noexcept
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

    return epoll_ctl(epfd, EPOLL_CTL_MOD, fd, event)._with_error<Error>();
}

} // namespace epoll_ctl_
} // namespace linux

#endif
