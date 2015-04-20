// -*- C++ -*-
#pragma once

#include "c/SYS_open.h"
#include "c/mode_t.h"
#include "Result"

namespace system {

static inline
auto
open(const char* pathname, int flags) noexcept
{
#define _(name, doc) _##name = name
    enum Error
    {
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EACCES.h"

        _(EACCES, "Search permission is denied for a component of the path prefix."
          " / "
          "The required permissions (for reading and/or writing) are denied for the given flags."
          " / "
          "O_CREAT is specified, the file does not exist, and"
          " the directory in which it is to be created does not permit writing."
          " / "
          "(freebsd) O_TRUNC is specified and write permission is denied."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EDQUOT.h"

        _(EDQUOT, "O_CREAT is specified, the file does not exist, and"
          " the directory in which the entry for the new file is being placed cannot be extended"
          " because the user's quota of disk blocks on the file system containing the directory"
          " has been exhausted."
          " / "
          "O_CREAT is specified, the file does not exist, and"
          " the user's quota of inodes on the file system on which the file is being created"
          " has been exhausted."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EEXIST.h"

        _(EEXIST, "O_CREAT and O_EXCL were specified and the file exists."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EFAULT.h"

        _(EFAULT, "The `path` argument points outside the process's allocated address space."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EINTR.h"

        _(EINTR, "The `open()` operation was interrupted by a signal."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EINVAL.h"

        _(EINVAL, "An attempt was made to open a descriptor with an illegal combination of"
          " O_RDONLY, O_WRONLY, O_RDWR, and O_EXEC."
          " / "
          "(linux) O_TMPFILE was specified in `flags`, but"
          " neither O_WRONLY nor O_RDWR was specified."
          " / "
          "(linux) The filesystem does not support the O_DIRECT flag."),

#endif
#if defined(__FreeBSD__)
#  include "c/EIO.h"

        _(EIO, "An I/O error occurred while making the directory entry"
          " or allocating the inode for O_CREAT."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EISDIR.h"

        _(EISDIR, "The named file is a directory, and"
          " the arguments specified it is to be modified."
          " / "
          "(linux) `path` refers to an existing directory,"
          " O_TMPFILE and one of O_WRONLY or O_RDWR were specified in `flags`,"
          " but this kernel version does not provide the O_TMPFILE functionality."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ELOOP.h"

        _(ELOOP, "Too many symbolic links were encountered in translating the pathname."
          " / "
          "(linux) `path` was a symbolic link, and `flags` specified O_NOFOLLOW but not O_PATH."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EMFILE.h"

        _(EMFILE, "The process has already reached its limit for open file descriptors."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ENAMETOOLONG.h"

        _(ENAMETOOLONG, "`path` was too long."),

#endif
#if defined(__linux__)
#  include "c/ENFILE.h"

        _(ENFILE, "The system limit on the total number of open files has been reached."),

#endif
#if defined(__linux__)
#  include "c/ENODEV.h"

        _(ENODEV, "`path` refers to a device special file and no corresponding device exists."
          " (This is a Linux kernel bug.)"), // Was this ever fixed?

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ENOENT.h"

        _(ENOENT, "O_CREAT is not set and the named file does not exist."
          " / "
          "A component of the path name that must exist does not exist."
          " / "
          "(linux) `path` refers to a nonexistent directory,"
          " O_TMPFILE and one of O_WRONNLY or O_RDWR were specified in flags,"
          " but this kernel version does not provide the O_TMPFILE functionality."),

#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"

        _(ENOMEM, "Insufficient kernel memory was available."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ENOSPC.h"

        _(ENOSPC, "O_CREAT is specified, the file does not exist, and"
          " the directory in which the entry for the new file is being placed"
          " cannot be extended because there is no space left on the file system"
          " containing the directory."
          " / "
          "O_CREAT is specified, the file does not exist, and"
          " there are no free inodes on the file system on which the file is being created."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ENOTDIR.h"

        _(ENOTDIR, "O_DIRECTORY is specified and the file is not a directory."
          " / "
          "(linux) A component used as a directory in `path` is not a directory."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ENXIO.h"

        _(ENXIO, "O_NONBLOCK is set, the named file is a fifo, O_WRONLY is set, and"
          " no process has the file open for reading."
          " / "
          "The named file is a character special or block special file, and"
          " the device associated with this special file does not exist."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EOPNOTSUPP.h"

        _(EOPNOTSUPP, "(freebsd) O_SHLOCK or O_EXLOCK is specified"
          " but the underlying file system does not support locking."
          " / "
          "(freebsd) The named file is a special file mounted through a file system"
          " that does not support access to it (e.g. NFS)."
          " / "
          "(linux) The filesystem containing `path` does not support O_TMPFILE."),

#endif
#if defined(__linux__)
#  include "c/EOVERFLOW.h"

        _(EOVERFLOW, "`path` refers to a regular file that is too large to be opened."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EPERM.h"

        _(EPERM, "(freebsd) O_CREAT is specified, the file does not exist, and"
          " the directory in which it is to be created has its immutable flag set."
          " / "
          "(freebsd) The named file has its immutable flag set and"
          " the file is to be modified."
          " / "
          "(freebsd) The named file has its append-only flag set,"
          " the file is to be modified, and"
          " O_TRUNC is specified or O_APPEND is not specified."
          " / "
          "(linux) The O_NOATIME flag was specified, but"
          " the effective user ID of the caller did not match the owner of the file"
          " and the caller was not privileged."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EROFS.h"

        _(EROFS, "The named file resides on a read-only filed system, and"
          " the file is to be modified."
          " / "
          "O_CREAT is specified and the named file would reside on a read-only file system."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/ETXTBSY.h"

        _(ETXTBSY, "The file is a shared text file that is being executed and"
          " the open() system call requests write access."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EWOULDBLOCK.h"

        _(EWOULDBLOCK, "(freebsd) O_NONBLOCK and one of O_SHLOCK or O_EXLOCK is specified and"
          " the file is locked."
          " / "
          "(linux) O_NONBLOCK was specified, and"
          " an incompatible lease was held on the file."),

#endif
    };
#undef _

    return Result<int, Error>(SYS_open, pathname, flags);
}

}
