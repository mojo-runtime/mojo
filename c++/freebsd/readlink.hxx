#pragma once

#include <c/size_t.h>
#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
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
