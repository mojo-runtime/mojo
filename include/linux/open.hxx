#ifndef linux_open_hxx_
#define linux_open_hxx_

#include "linux/_c_syscall2.h"
#include "linux/EACCES.h"
#include "linux/EDQUOT.h"
#include "linux/EEXIST.h"
#include "linux/EFAULT.h"
#include "linux/EFBIG.h"
#include "linux/EINTR.h"
#include "linux/EINVAL.h"
#include "linux/EISDIR.h"
#include "linux/ELOOP.h"
#include "linux/EMFILE.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENFILE.h"
#include "linux/ENODEV.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOSPC.h"
#include "linux/ENOTDIR.h"
#include "linux/ENXIO.h"
#include "linux/EOPNOTSUPP.h"
#include "linux/EOVERFLOW.h"
#include "linux/EPERM.h"
#include "linux/EROFS.h"
#include "linux/ETXTBSY.h"
#include "linux/EWOULDBLOCK.h"
#include "linux/SYS_open.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
open(const char* pathname, int flags) noexcept
{
    enum Error
    {
        // The requested access to the file is not allowed.
        //
        // Search permission is denied for one of the directories in the path prefix of `pathname`.
        //
        // The file did not exist yet and write access to the parent directory is not allowed.
        EACCES_ = EACCES,

        // Where O_CREAT is specified, the file does not exist,
        // and the user's quota of disk blocks or inodes on the filesystem has been exhausted.
        EDQUOT_ = EDQUOT,

        // `pathname` already exists and O_CREAT and O_EXCL were used.
        EEXIST_ = EEXIST,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // See EOVERFLOW.
        EFBIG_ = EFBIG,

        // While blocked waiting to complete an open of a slow device (e.g., a FIFO; see fifo(7)),
        // the call was interrupted by a signal handler; see signal(7).
        EINTR_ = EINTR,

        // The filesystem does not support the O_DIRECT flag.
        //
        // Invalid value in `flags`.
        //
        // O_TMPFILE was specified in `flags`, but neither O_WRONLY nor O_RDWR was specified.
        EINVAL_ = EINVAL,

        // `pathname` refers to a directory and the access requested involved writing.
        //
        // `pathname` refers to an existing directory,
        //
        // O_TMPFILE and one of O_WRONLY or O_RDWR were specified in `flags`,
        // but this kernel version does not provide the O_TMPFILE functionality.
        EISDIR_ = EISDIR,

        // Too many symbolic links were encountered in resolving pathname.
        //
        // `pathname` was a symbolic link, and `flags` specified O_NOFOLLOW but not O_PATH.
        ELOOP_ = ELOOP,

        // The process already has the maximum number of files open.
        EMFILE_ = EMFILE,

        // `pathname` was too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,

        // `pathname` refers to a device special file and no corresponding device exists.
        // (This is a Linux kernel bug; in this situation ENXIO must be returned.)
        ENODEV_ = ENODEV,

        // O_CREAT is not set and the named file does not exist.
        //
        // A directory component in `pathname` does not exist or is a dangling symbolic link.
        //
        // `pathname` refers to a nonexistent directory,
        // O_TMPFILE and one of O_WRONLY or O_RDWR were specified in flags,
        // but this kernel version does not provide the O_TMPFILE functionality.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // `pathname` was to be created
        // but the device containing `pathname` has no room for the new file.
        ENOSPC_ = ENOSPC,

        // A component used as a directory in `pathname` is not, in fact, a directory,
        //
        // O_DIRECTORY was specified and `pathname` was not a directory.
        ENOTDIR_ = ENOTDIR,

        // O_NONBLOCK | O_WRONLY is set, the named file is a FIFO
        // and no process has the file open for reading.
        //
        // The file is a device special file and no corresponding device exists.
        ENXIO_ = ENXIO,

        // The filesystem containing pathname does not support O_TMPFILE.
        EOPNOTSUPP_ = EOPNOTSUPP,

        // `pathname` refers to a regular file that is too large to be opened.
        // The usual scenario here is that an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS = 64 tried to open a file whose size exceeds (2<<31)-1 bits;
        // This is the error specified by POSIX.1-2001;
        // in kernels before 2.6.24, Linux gave the error EFBIG for this case.
        EOVERFLOW_ = EOVERFLOW,

        // The O_NOATIME flag was specified,
        // but the effective user ID of the caller did not match the owner of the file
        // and the caller was not privileged (CAP_FOWNER).
        EPERM_ = EPERM,

        // `pathname` refers to a file on a read-only filesystem and write access was requested.
        EROFS_ = EROFS,

        // `pathname` refers to an executable image which is currently being executed
        // and write access was requested.
        ETXTBSY_ = ETXTBSY,

        // The O_NONBLOCK flag was specified,
        // and an incompatible lease was held on the file (see fcntl(2)).
        EWOULDBLOCK_ = EWOULDBLOCK,
    };

    return Result<int, Error>(_c_syscall2(SYS_open, pathname, flags));
}

} // namespace linux

#endif
