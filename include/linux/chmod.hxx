#ifndef linux_chmod_hxx_
#define linux_chmod_hxx_

#include "linux/EACCES.h"
#include "linux/EFAULT.h"
#include "linux/EIO.h"
#include "linux/ELOOP.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/EPERM.h"
#include "linux/EROFS.h"
#include "linux/SYS_chmod.h"
#include "linux/mode_t.h"
#include "linux/_syscall_2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        // Search permission is denied on a component of the path prefix.
        EACCES_ = EACCES,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // An I/O error occurred.
        EIO_ = EIO,

        // Too many symbolic links were encountered in resolving `pathname`.
        ELOOP_ = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The file does not exist.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix is not a directory.
        ENOTDIR_ = ENOTDIR,

        // The effective UID does not match the owner of the file,
        // and the process is not privileged.
        EPERM_ = EPERM,

        // The named file resides on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(_syscall_2(SYS_chmod, pathname, mode));
}

} // namespace linux

#endif
