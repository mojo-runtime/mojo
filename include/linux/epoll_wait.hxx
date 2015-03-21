#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/SYS_epoll_wait.h"
#include "c/struct epoll_event.h"

#include "Result.hxx"

namespace linux {

static inline
auto
epoll_wait(int epfd,
           struct epoll_event* events,
           int maxevents,
           int timeout) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EBADF),
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
#undef _
    };

    return Result<int, Error>(SYS_epoll_wait, epfd, events, maxevents, timeout);
}

}
