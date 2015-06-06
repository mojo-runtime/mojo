#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
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
