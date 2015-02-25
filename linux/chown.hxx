#ifndef linux_chown_hxx_
#define linux_chown_hxx_

#include "linux/c/_linux_syscall3.h"
#include "linux/c/EACCES.h"
#include "linux/c/EFAULT.h"
#include "linux/c/ELOOP.h"
#include "linux/c/ENAMETOOLONG.h"
#include "linux/c/ENOENT.h"
#include "linux/c/ENOMEM.h"
#include "linux/c/ENOTDIR.h"
#include "linux/c/EPERM.h"
#include "linux/c/EROFS.h"
#include "linux/c/SYS_chown.h"
#include "linux/c/gid_t.h"
#include "linux/c/uid_t.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
chown(const char* pathname, uid_t owner, gid_t group) noexcept
{
    enum Error
    {
        // Search permission is denied on a component of the path prefix.
        EACCES_ = EACCES,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // Too many symbolic links were encountered in resolving 1pathname`.
        ELOOP_ = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The file does not exist.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix is not a directory.
        ENOTDIR_ = ENOTDIR,

        // The calling process did not have the required permissions to change owner and/or group.
        EPERM_ = EPERM,

        // The named file resides on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(_linux_syscall3(SYS_chown, pathname, owner, group));
}

} // namespace linux

#endif
