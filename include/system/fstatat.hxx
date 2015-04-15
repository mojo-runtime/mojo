// -*- C++ -*-
#pragma once

#include "c/struct stat.h"
#include "Result.hxx"

namespace system {

static inline
auto
fstatat(int dirfd,
        const char* pathname,
        struct stat* buf,
        int flags) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOMEM.h"
#  include "c/ENOTDIR.h"
#  include "c/EOVERFLOW.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOMEM),
        _(ENOTDIR),
        _(EOVERFLOW),
    };

#  undef _
#  include "c/SYS_fstatat.h"

    return Result<void, Error>(SYS_fstatat, dirfd, pathname, buf, flags);

#else
#  error
#endif
}

}
