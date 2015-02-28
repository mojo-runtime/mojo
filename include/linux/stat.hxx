#ifndef linux_stat_hxx_
#define linux_stat_hxx_

#include "linux/_syscall_2.h"
#include "linux/EACCES.h"
#include "linux/EFAULT.h"
#include "linux/ELOOP.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/EOVERFLOW.h"
#include "linux/SYS_stat.h"
#include "linux/struct-stat.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
{
    enum Error
    {
        // Search permission is denied for one of the directories in the path prefix of `pathname`.
        EACCES_ = EACCES,

        // `fd` is bad.
        // EBADF

        // Bad address.
        EFAULT_ = EFAULT,

        // Too many symbolic links encountered while traversing the path.
        ELOOP_ = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A component of `pathname` does not exist.
        //
        // `pathname is an empty string.
        ENOENT_ = ENOENT,

        // Out of (kernel) memory.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix of `pathname` is not a directory.
        ENOTDIR_ = ENOTDIR,

        // `pathname` refers to a file whose size, inode number, or number of blocks
        // cannot be represented in, respectively, the types off_t, ino_t, or blkcnt_t.
        // This error can occur when, for example, an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS=64 calls stat() on a file whose size exceeds (1<<31)-1 bytes.
        EOVERFLOW_ = EOVERFLOW,
    };

    return Result<void, Error>(_syscall_2(SYS_stat, pathname, buf));
}

static inline
auto
stat(const char* pathname, struct stat& buf) noexcept
{
    enum Error
    {
        EACCES_       = EACCES,
        // EFAULT
        ELOOP_        = ELOOP,
        ENAMETOOLONG_ = ENAMETOOLONG,
        ENOENT_       = ENOENT,
        ENOMEM_       = ENOMEM,
        ENOTDIR_      = ENOTDIR,
        EOVERFLOW_    = EOVERFLOW,
    };

    return Result<void, Error>(_syscall_2(SYS_stat, pathname, &buf));
}

} // namespace linux

#endif
