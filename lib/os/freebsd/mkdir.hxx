#pragma once

#include "errno/EACCES.h"
#include "errno/EEXIST.h"
#include "errno/EFAULT.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOSPC.h"
#include "errno/ENOTDIR.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "syscall/SYS_mkdir.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(EXIST),
        _E(FAULT),
        _E(LOOP),
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
