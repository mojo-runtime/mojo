#ifndef linux_unlink_hxx_
#define linux_unlink_hxx_

#include "linux/_c_syscall1.h"
#include "linux/EACCES.h"
#include "linux/EBUSY.h"
#include "linux/EFAULT.h"
#include "linux/EIO.h"
#include "linux/EISDIR.h"
#include "linux/ELOOP.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/EPERM.h"
#include "linux/EROFS.h"
#include "linux/SYS_unlink.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
unlink(const char* pathname) noexcept
{
    enum Error
    {
        // Write access to the directory containing `pathname` was not allowed
        // for the process's effective UID.
        //
        // One of the directories in `pathname` did not allow search permission.
        EACCES_ = EACCES,

        // The file `pathname` cannot be unlinked because it is being used by
        // the system or another process; for example, it is a mount point or
        // the NFS client software created it to represent an active
        // but otherwise nameless inode ("NFS silly renamed").
        EBUSY_ = EBUSY,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // An I/O error occurred.
        EIO_ = EIO,

        // `pathname` refers to a directory.
        EISDIR_ = EISDIR,

        // Too many symbolic links were encountered in translating `pathname`.
        ELOOP_ = ELOOP,

        // `pathname` was too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A component in `pathname` does not exist or is a dangling symbolic link.
        //
        // `pathname` is empty.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component used as a directory in `pathname` is not, in fact, a directory.
        ENOTDIR_ = ENOTDIR,

        // The filesystem does not allow unlinking of files.
        //
        // (EPERM or EACCES - ???)
        // The directory containing pathname has the sticky bit (S_ISVTX) set and
        // the process's effective UID is neither the UID of the file to be deleted
        // nor that of the directory containing it, and the process is not privileged.
        EPERM_ = EPERM,

        // `pathname` refers to a file on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(_c_syscall1(SYS_unlink, pathname));
}

} // namespace linux

#endif
