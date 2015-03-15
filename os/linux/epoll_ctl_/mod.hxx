#pragma once

#include "EPOLL_CTL_MOD.h"

#include "../epoll_ctl.hxx"

namespace linux { namespace epoll_ctl_ {

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

}}
