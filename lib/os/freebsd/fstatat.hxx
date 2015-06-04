#pragma once

#include "errno/EACCES.h"
#include "errno/EBADF.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOTDIR.h"
#include "errno/EOVERFLOW.h"
#include "c/struct-stat.h"
#include "Result.hxx"

#define __NR_fstatat 493

namespace os { inline namespace freebsd {

static inline
auto
fstatat(int dirfd, const char* path, struct stat* buffer, int flags) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(FAULT),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOTDIR),
        _E(OVERFLOW),
    };

    return Result<void, Error>(__NR_fstatat, dirfd, path, buffer, flags);
}

}}
