#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_stat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

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

    return Result<void, Error>(SYS_stat, pathname, buf);
}

}}
