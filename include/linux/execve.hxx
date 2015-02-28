#ifndef linux_execve_hxx_
#define linux_execve_hxx_

#include "linux/_c_syscall3.h"
#include "linux/E2BIG.h"
#include "linux/EACCES.h"
#include "linux/EFAULT.h"
#include "linux/EINVAL.h"
#include "linux/EIO.h"
#include "linux/EISDIR.h"
#include "linux/ELIBBAD.h"
#include "linux/ELOOP.h"
#include "linux/EMFILE.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENFILE.h"
#include "linux/ENOENT.h"
#include "linux/ENOEXEC.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/EPERM.h"
#include "linux/ETXTBSY.h"
#include "linux/SYS_execve.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
execve(const char* filename, char* const argv[], char* const envp[]) noexcept
{
    enum Error
    {
        // The total number of bytes in the environment (envp) and argument list (argv) is too large.
        E2BIG_ = E2BIG,

        // Search permission is denied on a component of the path prefix of `filename`
        // or the name of a script interpreter. (See also path_resolution(7).)
        //
        // The file or a script interpreter is not a regular file.
        //
        // Execute permission is denied for the file or a script or ELF interpreter.
        //
        // The filesystem is mounted noexec.
        EACCES_ = EACCES,

        // `filename` or one of the pointers in the vectors `argv` or `envp`
        // points outside your accessible address space.
        EFAULT_ = EFAULT,

        // An ELF executable had more than one PT_INTERP segment
        // (i.e., tried to name more than one interpreter).
        EINVAL_ = EINVAL,

        // An I/O error occurred.
        EIO_ = EIO,

        // An ELF interpreter was a directory.
        EISDIR_ = EISDIR,

        // An ELF interpreter was not in a recognized format.
        ELIBBAD_ = ELIBBAD,

        // Too many symbolic links were encountered in resolving
        // `filename` or the name of a script or ELF interpreter.
        ELOOP_ = ELOOP,

        // The process has the maximum number of files open.
        EMFILE_ = EMFILE,

        // `filename` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,

        // The file `filename` or a script or ELF interpreter does not exist.
        //
        // A shared library needed for file or interpreter cannot be found.
        ENOENT_ = ENOENT,

        // An executable is not in a recognized format, is for the wrong architecture,
        // or has some other format error that means it cannot be executed.
        ENOEXEC_ = ENOEXEC,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix of `filename` or a script or ELF interpreter
        // is not a directory.
        ENOTDIR_ = ENOTDIR,

        // The filesystem is mounted nosuid, the user is not the superuser,
        // and the file has the set-user-ID or set-group-ID bit set.
        //
        // The process is being traced, the user is not the superuser and
        // the file has the set-user-ID or set-group-ID  bit set.
        EPERM_ = EPERM,

        // Executable was open for writing by one or more processes.
        ETXTBSY_ = ETXTBSY,
    };

    return Result<void, Error>(_c_syscall3(SYS_execve, filename, argv, envp));
}

} // namespace linux

#endif
