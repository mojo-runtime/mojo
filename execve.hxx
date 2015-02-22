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
#include "c/extension/x_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
execve(const char* filename, char* const argv[], char* const envp[]) noexcept
{
    enum Error
    {
        // The total number of bytes in the environment (envp) and argument list (argv) is too large.
        E2BIG = E2BIG,

        // Search permission is denied on a component of the path prefix of `filename`
        // or the name of a script interpreter. (See also path_resolution(7).)
        //
        // The file or a script interpreter is not a regular file.
        //
        // Execute permission is denied for the file or a script or ELF interpreter.
        //
        // The filesystem is mounted noexec.
        EACCES = EACCES,

        // `filename` or one of the pointers in the vectors `argv` or `envp`
        // points outside your accessible address space.
        EFAULT = EFAULT,

        // An ELF executable had more than one PT_INTERP segment
        // (i.e., tried to name more than one interpreter).
        EINVAL = EINVAL,

        // An I/O error occurred.
        EIO = EIO,

        // An ELF interpreter was a directory.
        EISDIR = EISDIR,

        // An ELF interpreter was not in a recognized format.
        ELIBBAD = ELIBBAD,

        // Too many symbolic links were encountered in resolving
        // `filename` or the name of a script or ELF interpreter.
        ELOOP = ELOOP,

        // The process has the maximum number of files open.
        EMFILE = EMFILE,

        // `filename` is too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // The system limit on the total number of open files has been reached.
        ENFILE = ENFILE,

        // The file `filename` or a script or ELF interpreter does not exist,
        // or a shared library needed for file or interpreter cannot be found.
        ENOENT = ENOENT,

        // An executable is not in a recognized format, is for the wrong architecture,
        // or has some other format error that means it cannot be executed.
        ENOEXEC = ENOEXEC,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // A component of the path prefix of `filename` or a script or ELF interpreter
        // is not a directory.
        ENOTDIR = ENOTDIR,

        // The filesystem is mounted nosuid, the user is not the superuser,
        // and the file has the set-user-ID or set-group-ID bit set.
        //
        // The process is being traced, the user is not the superuser and
        // the file has the set-user-ID or set-group-ID  bit set.
        EPERM = EPERM,

        // Executable was open for writing by one or more processes.
        ETXTBSY = ETXTBSY,
    };

    return Result<void, Error>(x_syscall3(SYS_execve, filename, argv, envp));
}

} // namespace linux

#endif
