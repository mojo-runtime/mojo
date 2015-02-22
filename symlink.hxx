#ifndef linux_symlink_hxx_
#define linux_symlink_hxx_

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_symlink.h"
#include "c/extension/x_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
symlink(const char* target, const char* linkpath) noexcept
{
    enum Error
    {
        // Write access to the directory containing `linkpath` is denied, or
        // one of the directories in the path prefix of `linkpath` did not allow search permission.
        EACCES = EACCES,

        // The user's quota of resources on the filesystem has been exhausted.
        // The resources could be inodes or disk blocks,
        // depending on the filesystem implementation.
        EDQUOT = EDQUOT,

        // `linkpath` already exists.
        EEXIST = EEXIST,

        // `target` or `linkpath` points outside your accessible address space.
        EFAULT = EFAULT,

        // An I/O error occurred.
        EIO = EIO,

        // Too many symbolic links were encountered in resolving `linkpath`.
        ELOOP = ELOOP,

        // `target` or `linkpath` was too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // A directory component in `linkpath` does not exist or is a dangling symbolic link,
        // or `target` is the empty string.
        ENOENT = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // The device containing the file has no room for the new directory entry.
        ENOSPC = ENOSPC,

        // A component used as a directory in `linkpath` is not, in fact, a directory.
        ENOTDIR = ENOTDIR,

        // The filesystem containing `linkpath` does not support the creation of symbolic links.
        EPERM = EPERM,

        // `linkpath` is on a read-only filesystem.
        EROFS = EROFS,
    };

    return Result<void, Error>(x_syscall2(SYS_symlink, target, linkpath));
}

} // namespace linux

#endif
