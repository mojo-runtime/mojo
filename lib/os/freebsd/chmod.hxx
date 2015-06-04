#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EFTYPE.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOTDIR.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "c/mode_t.h"
#include "Result.hxx"

#define __NR_chmod 15

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

    return Result<void, Error>(__NR_chmod, pathname, mode);
}

}}
