#pragma once

#include "c/SYS_fstatat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

namespace system {

static inline
auto
fstatat(int dirfd,
        const char* pathname,
        struct stat* buf,
        int flags) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
        _(EACCES),
        _(EBADF),
        _(EFAULT),
#endif
#if defined(__linux__)
#  include "c/EINVAL.h"
        _(EINVAL),
#endif
#if defined(__FreeBSD__)
#  include "c/EIO.h"
        _(EIO),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
        _(ELOOP),
        _(ENAMETOOLONG),
#endif
#if defined(__FreeBSD__) // linux?
#  include "c/ENOENT.h"
        _(ENOENT),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOTDIR.h"
#  include "c/EOVERFLOW.h"
        _(ENOTDIR),
        _(EOVERFLOW),
#endif
    };
#undef _

    return Result<void, Error>(SYS_fstatat, dirfd, pathname, buf, flags);
}

}
