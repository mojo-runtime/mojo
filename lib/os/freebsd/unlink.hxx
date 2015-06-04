#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "Result.hxx"

#define __NR_unlink 10

namespace os { inline namespace freebsd {

static inline
auto
unlink(const char* pathname) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(IO),
        _E(ISDIR),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(__NR_unlink, pathname);
}

}}
