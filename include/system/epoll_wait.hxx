// -*- C++ -*-
#pragma once

#include "c/struct epoll_event.h"
#include "Result"

namespace system {

static inline
auto
epoll_wait(int epfd,
           struct epoll_event* events,
           int maxevents,
           int timeout) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
    };

#  undef _
#  include "c/SYS_epoll_wait.h"

    return Result<int, Error>(SYS_epoll_wait, epfd, events, maxevents, timeout);

#else
#  error
#endif
}

}
