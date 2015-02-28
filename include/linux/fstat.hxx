#ifndef linux_fstat_hxx_
#define linux_fstat_hxx_

#include "linux/_syscall_2.h"
#include "linux/EBADF.h"
#include "linux/EFAULT.h"
#include "linux/ENOMEM.h"
#include "linux/EOVERFLOW.h"
#include "linux/SYS_fstat.h"
#include "linux/struct-stat.h"

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

    return Result<void, Error>(_syscall_2(SYS_fstat, fd, buf));
}

} // namespace linux

#endif
