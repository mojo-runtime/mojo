// -*- C++ -*-
#pragma once

#include "c/SYS_execve.h"
#include "Result.hxx"

namespace system {

static inline
auto
execve(const char* filename,
       char *const argv[],
       char *const envp[]) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/E2BIG.h"
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
        _(E2BIG),
        _(EACCES),
        _(EFAULT),
#endif
#if defined(__linux__)
#  include "c/EINVAL.h"
        _(EINVAL),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EIO.h"
        _(EIO),
#endif
#if defined(__linux__)
#  include "c/EISDIR.h"
#  include "c/ELIBBAD.h"
        _(EISDIR),
        _(ELIBBAD),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ELOOP.h"
        _(ELOOP),
#endif
#if defined(__linux__)
#  include "c/EMFILE.h"
        _(EMFILE),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENAMETOOLONG.h"
        _(ENAMETOOLONG),
#endif
#if defined(__linux__)
#  include "c/ENFILE.h"
        _(ENFILE),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOENT.h"
#  include "c/ENOEXEC.h"
        _(ENOENT),
        _(ENOEXEC),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOTDIR.h"
        _(ENOTDIR),
#endif
#if defined(__linux__)
#  include "c/EPERM.h"
        _(EPERM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ETXTBSY.h"
        _(ETXTBSY),
#endif
    };
#undef _

    return Result<void, Error>(SYS_execve, filename, argv, envp).error();
}

}

