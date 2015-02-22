#ifndef linux_fstatat_hxx_
#define linux_fstatat_hxx_

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_fstatat.h"
#include "c/struct-stat.h"
#include "c/extension/x_syscall4.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fstatat(int dirfd, const char* pathname, struct stat* buf, int flags) noexcept
{
    enum Error
    {
        // Search permission is denied for one of the directories in the path prefix of `pathname`.
        EACCES = EACCES,

        // `fd` is bad.
        //
        // `dirfd` is not a valid file descriptor.
        EBADF = EBADF,

        // Bad (`buf`) address.
        EFAULT = EFAULT,

        // Invalid flag specified in `flags`.
        EINVAL = EINVAL,

        // Too many symbolic links encountered while traversing the path.
        ELOOP = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // A component of `pathname` does not exists.
        //
        // `pathname` is an empty string.
        ENOENT = ENOENT,

        // Out of (kernel) memory.
        ENOMEM = ENOMEM,

        // A component of the path prefix of `pathname` is not a directory.
        //
        // `pathname` is relative and
        // `dirfd` is a file descriptor referring to a file other than a directory.
        ENOTDIR = ENOTDIR,

        // `pathname` refers to a file whose size, inode number, or number of blocks
        // cannot be represented in, respectively, the types off_t, ino_t, or blkcnt_t.
        // This error can occur when, for example, an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS=64 calls stat() on a file whose size exceeds (1<<31)-1 bytes.
        EOVERFLOW = EOVERFLOW,
    };

    return Result<void, Error>(x_syscall4(SYS_fstatat, dirfd, pathname, buf, flags));
}

static inline
auto
fstatat(int dirfd, const char* pathname, struct stat* buf) noexcept
{
    enum Error
    {
        EACCES = EACCES,
        EBADF = EBADF,
        EFAULT = EFAULT,
        // EINVAL
        ELOOP = ELOOP,
        ENAMETOOLONG = ENAMETOOLONG,
        ENOENT = ENOENT,
        ENOMEM = ENOMEM,
        ENOTDIR = ENOTDIR,
        EOVERFLOW = EOVERFLOW,
    };

    return fstatat(dirfd, pathname, buf, 0)._with_error<Error>();
}

} // namespace linux

#endif
