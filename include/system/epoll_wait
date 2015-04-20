// -*- C++ -*-
#pragma once

#include "c/struct-epoll_event.h"
#include "Result"

namespace system {

static inline
auto
epoll_wait(int epfd, struct epoll_event* events, int maxevents, int timeout) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  define _(name, doc) _##name = name

    enum Error
    {
        _(EBADF,
          "`epfd` is not a valid file descriptor."),

        _(EFAULT,
          "The memory area pointed to by `events`"
          " is not accessible with write permissions."),

        _(EINTR,
          "The call was interrupted by a signal handler before either"
          " (1) any of the requested events occurred or"
          " (2) the `timeout` expired."),

        _(EINVAL,
          "`epfd` is not an epoll file descriptor."
          " / "
          "`maxevents` is less than or equal to zero."),
    };

#  undef _
#  include "c/SYS_epoll_wait.h"

    return Result<int, Error>(SYS_epoll_wait, epfd, events, maxevents, timeout);

#else
#  error
#endif
}

}
