#pragma once

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/EMFILE.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/ENXIO.h"
#include "c/EOPNOTSUPP.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/ETXTBSY.h"
#include "c/EWOULDBLOCK.h"
#include "c/SYS_open.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
open(const char* pathname, int flags) noexcept
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

    return Result<int, Error>(SYS_open, pathname, flags);
}

}}
