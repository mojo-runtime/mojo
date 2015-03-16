#pragma once

#include "EPOLL_CTL_DEL.h"
#include "__syscall3.h"

#include "../epoll_ctl.hxx"

namespace linux { namespace epoll_ctl_ {

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

    return Result<void, Error>(__syscall3(SYS_epoll_ctl, epfd, EPOLL_CTL_DEL, fd));
}

}}
