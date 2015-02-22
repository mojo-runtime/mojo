#ifndef linux_chmod_hxx_
#define linux_chmod_hxx_

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_chmod.h"
#include "c/mode_t.h"
#include "c/extension/x_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        // Search permission is denied on a component of the path prefix.
        EACCES = EACCES,

        // `pathname` points outside your accessible address space.
        EFAULT = EFAULT,

        // An I/O error occurred.
        EIO = EIO,

        // Too many symbolic links were encountered in resolving `pathname`.
        ELOOP = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // The file does not exist.
        ENOENT = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // A component of the path prefix is not a directory.
        ENOTDIR = ENOTDIR,

        // The effective UID does not match the owner of the file,
        // and the process is not privileged.
        EPERM = EPERM,

        // The named file resides on a read-only filesystem.
        EROFS = EROFS,
    };

    return Result<void, Error>(x_syscall2(SYS_chmod, pathname, mode));
}

} // namespace linux

#endif
