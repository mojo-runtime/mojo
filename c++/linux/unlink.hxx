#pragma once

#include "c/EACCES.h"
#include "c/EBUSY.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_unlink 10
#elif defined(__x86_64__)
#  define __NR_unlink 87
#else
#  error
#endif

namespace linux {

static inline
auto
unlink(const char* pathname) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BUSY),
        _E(FAULT),
        _E(IO),
        _E(ISDIR),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(__NR_unlink, pathname);
}

}
