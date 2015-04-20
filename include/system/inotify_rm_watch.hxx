// -*- C++ -*-
#pragma once

#include "Result.hxx"

namespace system {

static inline
auto
inotify_rm_watch(int fd, int wd) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EINVAL.h"
#  define _(name, doc) _##name = name

    enum Error
    {
        _(EBADF,
          "`fd` is not a valid file descriptor."),

        _(EINVAL,
          "The watch descriptor `wd` is not valid."
          " / "
          "`fd` is not an inotify file descriptor."),
    };

#  undef _
#  include "c/SYS_inotify_rm_watch.h"

    return Result<void, Error>(SYS_inotify_rm_watch, fd, wd);

#else
#  error
#endif
}

}
