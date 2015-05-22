#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOTDIR.h"
#include "errno/EOVERFLOW.h"
#include "syscall/SYS_stat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

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

    return Result<void, Error>(SYS_stat, pathname, buf);
}

}}
