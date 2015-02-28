#ifndef linux_mkdir_hxx_
#define linux_mkdir_hxx_

#include "linux/_c_syscall2.h"
#include "linux/EACCES.h"
#include "linux/EDQUOT.h"
#include "linux/EEXIST.h"
#include "linux/EFAULT.h"
#include "linux/ELOOP.h"
#include "linux/EMLINK.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOSPC.h"
#include "linux/ENOTDIR.h"
#include "linux/EPERM.h"
#include "linux/EROFS.h"
#include "linux/SYS_mkdir.h"
#include "linux/mode_t.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        // The parent directory does not allow write permission to the process.
        //
        // One of the directories in `pathname` did not allow search permission.
        EACCES_ = EACCES,

        // The user's quota of disk blocks or inodes on the filesystem has been exhausted.
        EDQUOT_ = EDQUOT,

        // `pathname` already exists (not necessarily as a directory).
        // This includes the case where `pathname` is a symbolic link, dangling or not.
        EEXIST_ = EEXIST,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // Too many symbolic links were encountered in resolving `pathname`.
        ELOOP_ = ELOOP,

        // The number of links to the parent directory would exceed LINK_MAX.
        EMLINK_ = EMLINK,

        // `pathname` was too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A directory component in `pathname` does not exist or is a dangling symbolic link.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // The device containing `pathname` has no room for the new directory.
        //
        // The new directory cannot be created because the user's disk quota is exhausted.
        ENOSPC_ = ENOSPC,

        // A component used as a directory in `pathname` is not, in fact, a directory.
        ENOTDIR_ = ENOTDIR,

        // The filesystem containing `pathname` does not support the creation of directories.
        EPERM_ = EPERM,

        // `pathname` refers to a file on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(_c_syscall2(SYS_mkdir, pathname, mode));
}

} // namespace linux

#endif
