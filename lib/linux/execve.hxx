#pragma once

#include "c/E2BIG.h"
#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELIBBAD.h"
#include "c/ELOOP.h"
#include "c/EMFILE.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENFILE.h"
#include "c/ENOENT.h"
#include "c/ENOEXEC.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/ETXTBSY.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_execve 11
#elif defined(__x86_64__)
#  define __NR_execve 59
#else
#  error
#endif

namespace linux {

static inline
auto
execve(const char* filename, char *const argv[], char *const envp[]) noexcept
{
    enum Error
    {
        _E(2BIG),
        _E(ACCES),
        _E(FAULT),
        _E(INVAL),
        _E(IO),
        _E(ISDIR),
        _E(LIBBAD),
        _E(LOOP),
        _E(MFILE),
        _E(NAMETOOLONG),
        _E(NFILE),
        _E(NOENT),
        _E(NOEXEC),
        _E(NOMEM),
        _E(NOTDIR),
        _E(PERM),
        _E(TXTBSY),
    };

    return Result<void, Error>(__NR_execve, filename, argv, envp).error();
}

}
