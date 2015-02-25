#ifndef linux_fstat_hxx_
#define linux_fstat_hxx_

#include "linux/c/_linux_syscall2.h"
#include "linux/c/EBADF.h"
#include "linux/c/EFAULT.h"
#include "linux/c/ENOMEM.h"
#include "linux/c/EOVERFLOW.h"
#include "linux/c/SYS_fstat.h"
#include "linux/c/struct-stat.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fstat(int fd, struct stat* buf) noexcept
{
    enum Error
    {
        // `fd` is bad.
        EBADF_ = EBADF,

        // Bad (`buf`) address.
        EFAULT_ = EFAULT,

        // Out of (kernel) memory.
        ENOMEM_ = ENOMEM,

        // `fd` refers to a file whose size, inode number, or number of blocks
        // cannot be represented in, respectively, the types off_t, ino_t, or blkcnt_t.
        // This error can occur when, for example, an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS=64 calls stat() on a file whose size exceeds (1<<31)-1 bytes.
        EOVERFLOW_ = EOVERFLOW,
    };

    return Result<void, Error>(_linux_syscall2(SYS_fstat, fd, buf));
}

} // namespace linux

#endif
