#ifndef linux_getdents_hxx_
#define linux_getdents_hxx_

#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOENT.h"
#include "c/ENOTDIR.h"
#include "c/SYS_getdents.h"
#include "c/linux_dirent.h"
#include "c/size_t.h"
#include "c/_c_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
getdents(/* unsigned */ int fd, struct linux_dirent* dirp, unsigned int count) noexcept
{
    enum Error
    {
        // Invalid file descriptor `fd`.
        EBADF = EBADF,

        // Argument points outside the calling process's address space.
        EFAULT = EFAULT,

        // Result buffer is too small.
        EINVAL = EINVAL,

        // No such directory.
        ENOENT = ENOENT,

        // File descriptor does not refer to a directory.
        ENOTDIR = ENOTDIR,
    };

    // On success, the number of bytes read is returned.

    return Result<size_t, Error>(_c_syscall3(SYS_getdents, fd, dirp, count));
}

} // namespace linux

#endif
