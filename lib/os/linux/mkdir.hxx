#pragma once

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/EMLINK.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "syscall/SYS_mkdir.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(DQUOT),
        _E(EXIST),
        _E(FAULT),
        _E(LOOP),
        _E(MLINK),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOSPC),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(SYS_mkdir, pathname, mode);
}

}}
