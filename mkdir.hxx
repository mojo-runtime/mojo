#ifndef linux_mkdir_hxx_
#define linux_mkdir_hxx_

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/EMLINK.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_mkdir.h"
#include "c/mode_t.h"
#include "c/extension/x_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        // The parent directory does not allow write permission to the process,
        // or one of the directories in `pathname` did not allow search permission.
        EACCES = EACCES,

        // The user's quota of disk blocks or inodes on the filesystem has been exhausted.
        EDQUOT = EDQUOT,

        // `pathname` already exists (not necessarily as a directory).
        // This includes the case where `pathname` is a symbolic link, dangling or not.
        EEXIST = EEXIST,

        // `pathname` points outside your accessible address space.
        EFAULT = EFAULT,

        // Too many symbolic links were encountered in resolving `pathname`.
        ELOOP = ELOOP,

        // The number of links to the parent directory would exceed LINK_MAX.
        EMLINK = EMLINK,

        // `pathname` was too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // A directory component in `pathname` does not exist or is a dangling symbolic link.
        ENOENT = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // The device containing `pathname` has no room for the new directory.
        //
        // The new directory cannot be created because the user's disk quota is exhausted.
        ENOSPC = ENOSPC,

        // A component used as a directory in `pathname` is not, in fact, a directory.
        ENOTDIR = ENOTDIR,

        // The filesystem containing `pathname` does not support the creation of directories.
        EPERM = EPERM,

        // `pathname` refers to a file on a read-only filesystem.
        EROFS = EROFS,
    };

    return Result<void, Error>(x_syscall2(SYS_mkdir, pathname, mode));
}

} // namespace linux

#endif
