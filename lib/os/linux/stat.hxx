#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOTDIR.h"
#include "errno/EOVERFLOW.h"
#include "c/struct-stat.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_stat 106
#elif defined(__x86_64__)
#  define __NR_stat 4
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
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
        _E(OVERFLOW),
    };

    return Result<void, Error>(__NR_stat, pathname, buf);
}

}}
