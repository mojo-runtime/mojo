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
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOSPC),
    };

#  undef _
#  include "c/SYS_inotify_add_watch.h"

    return Result<int, Error>(SYS_inotify_add_watch, fd, pathname, mask);

#else
#  error
#endif
}

}
