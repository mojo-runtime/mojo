#pragma once

#include <c/struct-epoll_event.h>
#include "Result.hxx"

namespace os {

static inline
auto
epoll_ctl(int epfd, int op, int fd, struct epoll_event* event) noexcept
{
#if defined(__linux__)
#  include <c/EBADF.h>
#  include <c/EEXIST.h>
#  include <c/EINVAL.h>
#  include <c/ENOENT.h>
#  include <c/ENOMEM.h>
#  include <c/ENOSPC.h>
#  include <c/EPERM.h>
#  define _(name, doc) _##name = name

    enum Error
    {
        _(EBADF,
          "`epfd` or `fd` is not a valid file descriptor."),

        _(EEXIST,
          "`op` was EPOLL_CTL_ADD, and"
          " the supplied file descriptor `fd` is already registered with this epoll instance."),

        _(EINVAL,
          "`epfd` is not an epoll file descriptor"
          " / "
          "`fd` is the same as `epfd`"
          " / "
          "`op` is not supported by this interface."),

        _(ENOENT,
          "`op` was EPOLL_CTL_MOD or EPOLL_CTL_DEL, and"
          " `fd` is not registered with this epoll instance."),

        _(ENOMEM,
          "There was insufficient memory to handle the requested `op`"),

        _(ENOSPC,
          "The limit imposed by /proc/sys/fs/epoll/max_user_watches was encountered"
          " while trying to register (EPOLL_CTL_ADD) a new file descriptor."),

        _(EPERM,
          "The target file `fd` does not support epoll."),
    };

#  undef _
#  include <c/SYS_epoll_ctl.h>

    return Result<void, Error>(SYS_epoll_ctl, epfd, op, fd, event);

#else
#  error
#endif
}

}
