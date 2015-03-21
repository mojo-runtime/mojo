#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/SYS_readlink.h"
#include "c/size_t.h"

#include "Result.hxx"

namespace os {

static inline
auto
readlink(int         dirfd,
         const char* pathname,
         char*       buf,
         size_t      bufsiz) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EACCES),
        _(EFAULT),
        _(EINVAL),
        _(EIO),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
#undef _
    };

    return Result<size_t, Error>(SYS_readlink, dirfd, pathname, buf, bufsiz);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
