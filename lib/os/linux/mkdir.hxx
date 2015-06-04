#pragma once

#include "errno/EACCES.h"
#include "errno/EDQUOT.h"
#include "errno/EEXIST.h"
#include "errno/EFAULT.h"
#include "errno/ELOOP.h"
#include "errno/EMLINK.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOSPC.h"
#include "errno/ENOTDIR.h"
#include "errno/EPERM.h"
#include "errno/EROFS.h"
#include "c/mode_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_mkdir 39
#elif defined(__x86_64__)
#  define __NR_mkdir 83
#else
#  error
#endif

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

    return Result<void, Error>(__NR_mkdir, pathname, mode);
}

}}
