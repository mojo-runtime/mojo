#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/EISDIR.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOTDIR.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "syscall/SYS_unlink.h"
#include "Result.hxx"

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

    return Result<void, Error>(SYS_unlink, pathname);
}

}}
