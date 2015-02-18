#ifndef linux_unlink_hxx_
#define linux_unlink_hxx_

#include "c/EACCES.h"
#include "c/EBUSY.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_unlink.h"
#include "c/_c_syscall1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
unlink(const char* pathname) noexcept
{
    enum Error
    {
        // Write access to the directory containing `pathname` was not allowed
        // for the process's effective UID, or one of the directories in `pathname`
        // did not allow search permission.
        EACCES = EACCES,

        // The file `pathname` cannot be unlinked because it is being used by
        // the system or another process; for example, it is a mount point or
        // the NFS client software created it to represent an active
        // but otherwise nameless inode ("NFS silly renamed").
        EBUSY = EBUSY,

        // `pathname` points outside your accessible address space.
        EFAULT = EFAULT,

        // An I/O error occurred.
        EIO = EIO,

        // `pathname` refers to a directory.
        EISDIR = EISDIR,

        // Too many symbolic links were encountered in translating `pathname`.
        ELOOP = ELOOP,

        // `pathname` was too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // A component in `pathname` does not exist or is a dangling symbolic link,
        // or, `pathname` is empty.
        ENOENT = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // A component used as a directory in `pathname` is not, in fact, a directory.
        ENOTDIR = ENOTDIR,

        // The filesystem does not allow unlinking of files.
        //
        // (EPERM or EACCES - ???)
        // The directory containing pathname has the sticky bit (S_ISVTX) set and
        // the process's effective UID is neither the UID of the file to be deleted
        // nor that of the directory containing it, and the process is not privileged.
        EPERM = EPERM,

        // `pathname` refers to a file on a read-only filesystem.
        EROFS = EROFS,
    };

    return Result<void, Error>(_c_syscall1(SYS_unlink, pathname));
}

} // namespace linux

#endif
