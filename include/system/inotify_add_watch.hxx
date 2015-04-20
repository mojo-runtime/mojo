// -*- C++ -*-
#pragma once

#include "c/uint32_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
inotify_add_watch(int fd, const char* pathname, uint32_t mask) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
#  include "c/ENOMEM.h"
#  include "c/ENOSPC.h"
#  define _(name, doc) _##name = name

    enum Error
    {
        _(EACCES,
          "Read access to the given file is not permitted."),

        _(EBADF,
          "The given file descriptor is not valid."),

        _(EFAULT,
          "`path` points outside of the process's accessible address space."),

        _(EINVAL,
          "The given event mask contains no valid events."
          " / "
          "`fd` is not an inotify file descriptor."),

        _(ENAMETOOLONG,
          "`path` is too long"),

        _(ENOENT,
          "A directory component in `path` does not exist or is a dangling symbolic link."),

        _(ENOMEM,
          "Insufficient kernel memory was available."),

        _(ENOSPC,
          "The user limit on the total number of inotify watches was reached."
          " / "
          "The kernel failed to allocate a needed resource."),
    };

#  undef _
#  include "c/SYS_inotify_add_watch.h"

    return Result<int, Error>(SYS_inotify_add_watch, fd, pathname, mask);

#else
#  error
#endif
}

}
