#pragma once

#include "errno/EACCES.h"
#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOMEM.h"
#include "errno/ENOTDIR.h"
#include "errno/EOVERFLOW.h"
#include "syscall/SYS_fstatat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
fstatat(int dirfd, const char* path, struct stat* buffer, int flags) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(FAULT),
        _E(INVAL),
        _E(LOOP),
        _E(NAMETOOLONG),
        // ENOENT?
        _E(NOMEM),
        _E(NOTDIR),
        _E(OVERFLOW),
    };

    return Result<void, Error>(SYS_fstatat, dirfd, path, buffer, flags);
}

}}
