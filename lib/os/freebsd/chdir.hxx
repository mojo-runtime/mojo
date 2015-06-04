#pragma once

#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EINTR.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOLINK.h"
#include "errno/ENOTDIR.h"
#include "Result.hxx"

#define __NR_chdir 12

namespace os { inline namespace freebsd {

static inline
auto
chdir(const char* path) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(FAULT),
        _E(INTR),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOLINK),
        _E(NOTDIR),
    };

    return Result<void, Error>(__NR_chdir, path);
}

}}
