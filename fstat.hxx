#ifndef linux_fstat_hxx_
#define linux_fstat_hxx_

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_fstat.h"
#include "c/struct-stat.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fstat(int fd, struct stat* buf) noexcept
{
    enum Error
    {
        // `fd` is bad.
        EBADF = EBADF,

        // Bad (`buf`) address.
        EFAULT = EFAULT,

        // Out of (kernel) memory.
        ENOMEM = ENOMEM,

        // `fd` refers to a file whose size, inode number, or number of blocks
        // cannot be represented in, respectively, the types off_t, ino_t, or blkcnt_t.
        // This error can occur when, for example, an application compiled on a 32-bit platform
        // without -D_FILE_OFFSET_BITS=64 calls stat() on a file whose size exceeds (1<<31)-1 bytes.
        EOVERFLOW = EOVERFLOW,
    };

    return Result<void, Error>(_c_syscall2(SYS_fstat, fd, buf));
}

} // namespace linux

#endif
