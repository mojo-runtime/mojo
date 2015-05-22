#pragma once

#include "errno/EACCES.h"
#include "errno/EDQUOT.h"
#include "errno/EEXIST.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOSPC.h"
#include "errno/ENOTDIR.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "syscall/SYS_symlink.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
symlink(const char* target, const char* linkpath) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(DQUOT),
        _E(EXIST),
        _E(FAULT),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOSPC),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(SYS_symlink, target, linkpath);
}

}}
