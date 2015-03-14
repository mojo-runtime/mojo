#pragma once

#include "c/EPOLL_CTL_DEL.h"

#include "../epoll_ctl.hxx"
#include "abi/syscall-3.hxx"

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

    return Result<void, Error>(abi::syscall(SYS_epoll_ctl, epfd, EPOLL_CTL_DEL, fd));
}

}}
