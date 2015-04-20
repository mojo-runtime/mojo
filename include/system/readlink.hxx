// -*- C++ -*-
#pragma once

#include "c/SYS_readlink.h"
#include "c/size_t.h"
#include "Result"

namespace system {

static inline
auto
readlink(int         dirfd,
         const char* pathname,
         char*       buf,
         size_t      bufsiz) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/EIO.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
        _(EACCES),
        _(EFAULT),
        _(EINVAL),
        _(EIO),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOTDIR.h"
        _(ENOTDIR),
#endif
    };
#undef _

    return Result<size_t, Error>(SYS_readlink, dirfd, pathname, buf, bufsiz);
}

}
