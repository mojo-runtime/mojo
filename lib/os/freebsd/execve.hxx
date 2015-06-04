#pragma once

#include "errno/E2BIG.h"
#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EIO.h"
#include "errno/ELOOP.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENOENT.h"
#include "errno/ENOEXEC.h"
#include "errno/ENOTDIR.h"
#include "errno/ETXTBSY.h"
#include "Result.hxx"

#define __NR_execve 59

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

    return Result<void, Error>(__NR_execve, filename, argv, envp).error();
}

}}
