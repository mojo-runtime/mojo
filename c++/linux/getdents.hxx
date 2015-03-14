#pragma once

#include "EBADF.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENOENT.h"
#include "ENOTDIR.h"
#include "SYS_getdents.h"
#include "size_t.h"
#include "struct-linux_dirent.h"

#include "Result.hxx"
#include "abi/syscall-3.hxx"

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

    return Result<size_t, Error>(abi::syscall(SYS_getdents, fd, dirp, count));
}

}
