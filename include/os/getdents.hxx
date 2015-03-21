#pragma once

#include "c/size_t.h"
#include "c/struct linux_dirent.h"
#include "Result.hxx"

namespace os {

static inline
auto
getdents(/* unsigned */ int fd,
         struct linux_dirent* dirp,
         size_t /* unsigned int */ count) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/ENOENT.h"
#  include "c/ENOTDIR.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ENOENT),
        _(ENOTDIR),
    };

#  undef _
#  include "c/SYS_getdents.h"

    return Result<size_t, Error>(SYS_getdents, fd, dirp, count);

#else
#  error
#endif
}

}

//--------------------------------------------------------------------------------------------------
