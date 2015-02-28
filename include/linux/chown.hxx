#ifndef linux_chown_hxx_
#define linux_chown_hxx_

#include "linux/_c_syscall3.h"
#include "linux/EACCES.h"
#include "linux/EFAULT.h"
#include "linux/ELOOP.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/EPERM.h"
#include "linux/EROFS.h"
#include "linux/SYS_chown.h"
#include "linux/gid_t.h"
#include "linux/uid_t.h"

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

    return Result<void, Error>(_c_syscall3(SYS_chown, pathname, owner, group));
}

} // namespace linux

#endif
