#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EFTYPE.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "syscall/SYS_chmod.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(FTYPE),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(SYS_chmod, pathname, mode);
}

}}
