#ifndef linux_fstatat_hxx_
#define linux_fstatat_hxx_

#include "linux/c/_linux_syscall4.h"
#include "linux/c/EACCES.h"
#include "linux/c/EBADF.h"
#include "linux/c/EFAULT.h"
#include "linux/c/EINVAL.h"
#include "linux/c/ELOOP.h"
#include "linux/c/ENAMETOOLONG.h"
#include "linux/c/ENOMEM.h"
#include "linux/c/ENOTDIR.h"
#include "linux/c/EOVERFLOW.h"
#include "linux/c/SYS_fstatat.h"
#include "linux/c/struct-stat.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fstatat(int dirfd, const char* pathname, struct stat* buf, int flags) noexcept
{
    enum Error
    {
        // Search permission is denied for one of the directories in the path prefix of `pathname`.
        EACCES_ = EACCES,

        // `fd` is bad.
        //
        // `dirfd` is not a valid file descriptor.
        EBADF_ = EBADF,

        // Bad (`buf`) address.
        EFAULT_ = EFAULT,

        // Invalid flag specified in `flags`.
        EINVAL_ = EINVAL,

        // Too many symbolic links encountered while traversing the path.
        ELOOP_ = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A component of `pathname` does not exists.
        //
        // `pathname` is an empty string.
        ENOENT_ = ENOENT,

        // Out of (kernel) memory.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix of `pathname` is not a directory.
        //
        // `pathname` is relative and
        // `dirfd` is a file descriptor referring to a file other than a directory.
        ENOTDIR_ = ENOTDIR,

        // `pathname` refers to a file whose size, inode number, or number of blocks
        // cannot be represented in, respectively, the types off_t, ino_t, or blkcnt_t.
        // This error can occur when, for example, an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS=64 calls stat() on a file whose size exceeds (1<<31)-1 bytes.
        EOVERFLOW_ = EOVERFLOW,
    };

    return Result<void, Error>(_linux_syscall4(SYS_fstatat, dirfd, pathname, buf, flags));
}

static inline
auto
fstatat(int dirfd, const char* pathname, struct stat* buf) noexcept
{
    enum Error
    {
        EACCES_       = EACCES,
        EBADF_        = EBADF,
        EFAULT_       = EFAULT,
        // EINVAL
        ELOOP_        = ELOOP,
        ENAMETOOLONG_ = ENAMETOOLONG,
        ENOENT_       = ENOENT,
        ENOMEM_       = ENOMEM,
        ENOTDIR_      = ENOTDIR,
        EOVERFLOW_    = EOVERFLOW,
    };

    return fstatat(dirfd, pathname, buf, 0)._with_error<Error>();
}

} // namespace linux

#endif
