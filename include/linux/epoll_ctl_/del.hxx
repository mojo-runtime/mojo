#ifndef linux_epoll_ctl_del_hxx_
#define linux_epoll_ctl_del_hxx_

#include "c/EPOLL_CTL_DEL.h"

#include "../epoll_ctl.hxx"
#include "../__call-3.hxx"

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

    return Result<void, Error>(__call(SYS_epoll_ctl, epfd, EPOLL_CTL_DEL, fd));
}

} // namespace epoll_ctl_
} // namespace linux

#endif
