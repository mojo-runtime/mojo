#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
#include "c/struct-stat.h"
#include "Result.hxx"

#define __NR_stat 188

namespace os { inline namespace freebsd {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOTDIR),
        _E(OVERFLOW),
    };

    return Result<void, Error>(__NR_stat, pathname, buf);
}

}}
