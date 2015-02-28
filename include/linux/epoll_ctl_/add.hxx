#ifndef linux_epoll_ctl_add_hxx_
#define linux_epoll_ctl_add_hxx_

#include "linux/EPOLL_CTL_ADD.h"

#include "linux/epoll_ctl.hxx"

namespace linux {
namespace epoll_ctl_ {

static inline
auto
add(int epfd, int fd, struct epoll_event* event) noexcept
{
    enum Error
    {
        EBADF_ = EBADF,
        EEXIST_ = EEXIST,
        EINVAL_ = EINVAL,
        // ENOENT
        ENOMEM_ = ENOMEM,
        ENOSPC_ = ENOSPC,
        EPERM_ = EPERM,
    };

    return epoll_ctl(epfd, EPOLL_CTL_ADD, fd, event)._with_error<Error>();
}

} // namespace epoll_ctl_
} // namespace linux

#endif
