#pragma once

#include "EACCES.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "EIO.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "SYS_readlink.h"
#include "size_t.h"

#include "Result.hxx"
#include "abi/syscall-3.hxx"

namespace linux {

static inline
auto
readlink(const char* pathname, char* buf, size_t bufsiz) noexcept
{
    enum Error
    {
        // Search permission is denied for a component of the path prefix.
        EACCES_ = EACCES,

        // `buf` extends outside the process's allocated address space.
        EFAULT_ = EFAULT,

        // `bufsiz` is not positive.
        //
        // The named file is not a symbolic link.
        EINVAL_ = EINVAL,

        // An I/O error occurred while reading from the filesystem.
        EIO_ = EIO,

        // Too many symbolic links were encountered in translating the pathname.
        ELOOP_ = ELOOP,

        // A pathname, or a component of a pathname, was too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The named file does not exist.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix is not a directory.
        ENOTDIR_ = ENOTDIR,
    };

    return Result<size_t, Error>(abi::syscall(SYS_readlink, pathname, buf, bufsiz));
}

}

