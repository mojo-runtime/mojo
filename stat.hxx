#ifndef linux_stat_hxx_
#define linux_stat_hxx_

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_stat.h"
#include "c/struct-stat.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
{
    enum Error
    {
        // Search permission is denied for one of the directories in the path prefix of `pathname`.
        EACCES = EACCES,

        // `fd` is bad.
        // EBADF

        // Bad address.
        EFAULT = EFAULT,

        // Too many symbolic links encountered while traversing the path.
        ELOOP = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // A component of `pathname` does not exist.
        //
        // `pathname is an empty string.
        ENOENT = ENOENT,

        // Out of (kernel) memory.
        ENOMEM = ENOMEM,

        // A component of the path prefix of `pathname` is not a directory.
        ENOTDIR = ENOTDIR,

        // `pathname` refers to a file whose size, inode number, or number of blocks
        // cannot be represented in, respectively, the types off_t, ino_t, or blkcnt_t.
        // This error can occur when, for example, an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS=64 calls stat() on a file whose size exceeds (1<<31)-1 bytes.
        EOVERFLOW = EOVERFLOW,
    };

    return Result<void, Error>(_c_syscall2(SYS_stat, pathname, buf));
}

} // namespace linux

#endif
