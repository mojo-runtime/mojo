#pragma once

#include "errno/EACCES.h"
#include "errno/EBUSY.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOTDIR.h"
#include "errno/ENOTEMPTY.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "syscall/SYS_rmdir.h"
#include "Result.hxx"

namespace os { inline namespace linux {

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
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOTDIR),
        _E(NOTEMPTY),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(SYS_rmdir, pathname);
}

}}
