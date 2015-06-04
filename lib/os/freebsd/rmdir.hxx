#pragma once

#include "errno/EACCES.h"
#include "errno/EBUSY.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOTDIR.h"
#include "errno/ENOTEMPTY.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "Result.hxx"

#define __NR_rmdir 137

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

    return Result<void, Error>(__NR_rmdir, pathname);
}

}}
