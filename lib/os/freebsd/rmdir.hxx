#pragma once

#include "c/EACCES.h"
#include "c/EBUSY.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/ENOTEMPTY.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_rmdir.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
rmdir(const char* pathname) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BUSY),
        _E(FAULT),
        _E(INVAL),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOTDIR),
        _E(NOTEMPTY),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(SYS_rmdir, pathname);
}

}}
