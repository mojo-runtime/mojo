#ifndef linux_getdents_hxx_
#define linux_getdents_hxx_

#include "c/size_t.h"

#include "linux/c/EBADF.h"
#include "linux/c/EFAULT.h"
#include "linux/c/EINVAL.h"
#include "linux/c/ENOENT.h"
#include "linux/c/ENOTDIR.h"
#include "linux/c/SYS_getdents.h"
#include "linux/c/struct-linux_dirent.h"
#include "linux/c/_linux_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
getdents(/* unsigned */ int fd, struct linux_dirent* dirp, unsigned int count) noexcept
{
    enum Error
    {
        // Invalid file descriptor `fd`.
        EBADF_ = EBADF,

        // Argument points outside the calling process's address space.
        EFAULT_ = EFAULT,

        // Result buffer is too small.
        EINVAL_ = EINVAL,

        // No such directory.
        ENOENT_ = ENOENT,

        // File descriptor does not refer to a directory.
        ENOTDIR_ = ENOTDIR,
    };

    // On success, the number of bytes read is returned.

    return Result<size_t, Error>(_linux_syscall3(SYS_getdents, fd, dirp, count));
}

} // namespace linux

#endif
