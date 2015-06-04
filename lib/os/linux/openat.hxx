#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/EMFILE.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENFILE.h"
#include "c/ENODEV.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/ENXIO.h"
#include "c/EOPNOTSUPP.h"
#include "c/EOVERFLOW.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/ETXTBSY.h"
#include "c/EWOULDBLOCK.h"
#include "c/mode_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_openat 322
#elif defined(__x86_64__)
#  define __NR_openat 257
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
openat(int dirfd, const char* pathname, int flags) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(DQUOT),
        _E(EXIST),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(ISDIR),
        _E(LOOP),
        _E(MFILE),
        _E(NAMETOOLONG),
        _E(NFILE),
        _E(NODEV),
        _E(NOENT),
        _E(NOMEM),
        _E(NOSPC),
        _E(NOTDIR),
        _E(NXIO),
        _E(OPNOTSUPP),
        _E(OVERFLOW),
        _E(PERM),
        _E(ROFS),
        _E(TXTBSY),
        _E(WOULDBLOCK),
    };

    return Result<int, Error>(__NR_openat, dirfd, pathname, flags);
}

}}
