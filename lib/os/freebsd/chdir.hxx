#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOLINK.h"
#include "c/ENOTDIR.h"
#include "syscall/SYS_chdir.h"
#include "Result.hxx"

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

    return Result<void, Error>(SYS_chdir, path);
}

}}
