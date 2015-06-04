#pragma once

#include "errno/EACCES.h"
#include "errno/EDQUOT.h"
#include "errno/EEXIST.h"
#include "errno/EFAULT.h"
#include "errno/EINTR.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/EISDIR.h"
#include "errno/ELOOP.h"
#include "errno/EMFILE.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOSPC.h"
#include "errno/ENOTDIR.h"
#include "errno/ENXIO.h"
#include "errno/EOPNOTSUPP.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "errno/ETXTBSY.h"
#include "errno/EWOULDBLOCK.h"
#include "c/mode_t.h"
#include "Result.hxx"

#define __NR_openat 499

namespace os { inline namespace freebsd {

static inline
auto
openat(int dirfd, const char* pathname, int flags) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(DQUOT),
        _E(EXIST),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(ISDIR),
        _E(LOOP),
        _E(MFILE),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOSPC),
        _E(NOTDIR),
        _E(NXIO),
        _E(OPNOTSUPP),
        _E(PERM),
        _E(ROFS),
        _E(TXTBSY),
        _E(WOULDBLOCK),
    };

    return Result<int, Error>(__NR_openat, dirfd, pathname, flags);
}

}}
