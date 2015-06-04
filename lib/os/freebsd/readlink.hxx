#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOTDIR.h"
#include "c/size_t.h"
#include "Result.hxx"

#define __NR_readlink 58

namespace os { inline namespace freebsd {

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
        _E(NOTDIR),
    };

    return Result<size_t, Error>(__NR_readlink, pathname, buf, bufsiz);
}

}}
