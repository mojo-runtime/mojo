#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_chdir 12
#elif defined(__x86_64__)
#  define __NR_chdir 80
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
chdir(const char* path) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOTDIR),
    };

    return Result<void, Error>(__NR_chdir, path);
}

}}
