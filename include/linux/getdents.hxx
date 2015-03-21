#pragma once

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/SYS_getdents.h"
#include "c/size_t.h"
#include "c/struct linux_dirent.h"

#include "Result.hxx"

namespace linux {

static inline
auto
getdents(/* unsigned */ int fd,
         struct linux_dirent* dirp,
         size_t /* unsigned int */ count) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ENOENT),
        _(ENOTDIR),
#undef _
    };

    return Result<size_t, Error>(SYS_getdents, fd, dirp, count);
}

}
