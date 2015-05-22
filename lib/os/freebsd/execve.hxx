#pragma once

#include "c/E2BIG.h"
#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOEXEC.h"
#include "c/ENOTDIR.h"
#include "c/ETXTBSY.h"
#include "syscall/SYS_execve.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
execve(const char* filename, char *const argv[], char *const envp[]) noexcept
{
    enum Error
    {
        _E(2BIG),
        _E(ACCES),
        _E(FAULT),
        _E(IO),
        _E(LOOP),
        _E(NAMETOOLONG),
        _E(NOENT),
        _E(NOEXEC),
        _E(NOTDIR),
        _E(TXTBSY),
    };

    return Result<void, Error>(SYS_execve, filename, argv, envp).error();
}

}}
