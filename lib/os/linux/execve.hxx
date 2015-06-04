#pragma once

#include "errno/E2BIG.h"
#include "errno/EACCES.h"
#include "errno/EFAULT.h"
#include "errno/EINVAL.h"
#include "errno/EIO.h"
#include "errno/EISDIR.h"
#include "errno/ELIBBAD.h"
#include "errno/ELOOP.h"
#include "errno/EMFILE.h"
#include "errno/ENAMETOOLONG.h"
#include "errno/ENFILE.h"
#include "errno/ENOENT.h"
#include "errno/ENOEXEC.h"
#include "errno/ENOMEM.h"
#include "errno/ENOTDIR.h"
#include "errno/EPERM.h"
#include "errno/ETXTBSY.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_execve 11
#elif defined(__x86_64__)
#  define __NR_execve 59
#else
#  error
#endif

namespace os { inline namespace linux {

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

}}
