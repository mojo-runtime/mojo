#ifndef linux_rmdir_hxx_
#define linux_rmdir_hxx_

#include "linux/_c_syscall1.h"
#include "linux/EACCES.h"
#include "linux/EBUSY.h"
#include "linux/EFAULT.h"
#include "linux/EINVAL.h"
#include "linux/ELOOP.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/ENOTEMPTY.h"
#include "linux/EPERM.h"
#include "linux/EROFS.h"
#include "linux/SYS_rmdir.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
rmdir(const char* pathname) noexcept
{
    enum Error
    {
        // Write access to the directory containing `pathname` was not allowed.
        //
        // One of the directories in the path prefix of `pathname` did not allow search permission.
        EACCES_ = EACCES,

        // `pathname` is currently in use by the system or some process that prevents its removal.
        // On Linux this means `pathname` is currently used as a mount point or is the root
        // directory of the calling process.
        EBUSY_ = EBUSY,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // `pathname` has . as last component.
        EINVAL_ = EINVAL,

        // Too many symbolic links were encountered in resolving pathname.
        ELOOP_ = ELOOP,

        // `pathname` was too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A directory component in `pathname` does not exist or is a dangling symbolic link.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component used as a directory in `pathname` is not, in fact, a directory.
        ENOTDIR_ = ENOTDIR,

        // `pathname` contains entries other than . and ..
        //
        // `pathname` has ..  as its final component.
        ENOTEMPTY_ = ENOTEMPTY,

        // The directory containing `pathname` has the sticky bit (S_ISVTX) set
        // and the process's effective user ID is neither the user ID of the file
        // to be deleted nor that of the directory containing it,
        // and the process is not privileged.
        //
        // The filesystem containing `pathname` does not support the removal of directories.
        EPERM_ = EPERM,

        // `pathname` refers to a directory on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(_c_syscall1(SYS_rmdir, pathname));
}

} // namespace linux

#endif
