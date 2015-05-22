#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_chown.h"
#include "c/gid_t.h"
#include "c/uid_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
chown(const char* pathname, uid_t owner, gid_t group) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(SYS_chown, pathname, owner, group);
}

}}
