#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/gid_t.h"
#include "c/uid_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_chown 182
#elif defined(__x86_64__)
#  define __NR_chown 92
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
chown(const char* pathname, uid_t owner, gid_t group) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOTDIR),
        _E(PERM),
        _E(ROFS),
    };

    return Result<void, Error>(__NR_chown, pathname, owner, group);
}

}}
