#ifndef linux_execve_hxx_
#define linux_execve_hxx_

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
#include "c/SYS_execve.h"
#include "c/_c_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
execve(const char* filename, char* const argv[], char* const envp[]) noexcept
{
    enum Error
    {
        E2BIG        = E2BIG,
        EACCES       = EACCES,
        EFAULT       = EFAULT,
        EINVAL       = EINVAL,
        EIO          = EIO,
        EISDIR       = EISDIR,
        ELIBBAD      = ELIBBAD,
        ELOOP        = ELOOP,
        EMFILE       = EMFILE,
        ENAMETOOLONG = ENAMETOOLONG,
        ENFILE       = ENFILE,
        ENOENT       = ENOENT,
        ENOEXEC      = ENOEXEC,
        ENOMEM       = ENOMEM,
        ENOTDIR      = ENOTDIR,
        EPERM        = EPERM,
        ETXTBSY      = ETXTBSY,
    };

    return Result<void, Error>(_c_syscall3(SYS_execve, filename, argv, envp));
}

} // namespace linux

#endif
