#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOMEM.h"
#include "errno/ENOTDIR.h"
#include "c/size_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_readlink 85
#elif defined(__x86_64__)
#  define __NR_readlink 89
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
readlink(const char* pathname, char* buf, size_t bufsiz) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(INVAL),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOMEM),
        _E(NOTDIR),
    };

    return Result<size_t, Error>(__NR_readlink, pathname, buf, bufsiz);
}

}}
