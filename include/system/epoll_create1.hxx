// -*- C++ -*-
#pragma once

#include "Result"

namespace system {

static inline
auto
epoll_create1(int flags) noexcept
{
#if defined(__linux__)
#  include "c/EINVAL.h"
#  include "c/EMFILE.h"
#  include "c/ENFILE.h"
#  include "c/ENOMEM.h"
#  define _(name, doc) _##name = name

    enum Error
    {
        _(EINVAL,
          "Invalid value specified in `flags`."),

        _(EMFILE,
          "The per-user limit on the number of epoll instances"
          " imposed by /proc/sys/fs/epoll/max_user_instances was encountered."),

        _(ENFILE,
          "The system limit on the total number of open files has been reached."),

        _(ENOMEM,
          "There was insufficient memory to create the kernel object"),
    };

#  undef _
#  include "c/SYS_epoll_create1.h"

    return Result<int, Error>(SYS_epoll_create1, flags);

#else
#  error
#endif
}

}
