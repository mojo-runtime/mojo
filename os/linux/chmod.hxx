#pragma once

#include "EACCES.h"
#include "EFAULT.h"
#include "EIO.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "EPERM.h"
#include "EROFS.h"
#include "SYS_chmod.h"
#include "mode_t.h"
#include "__syscall2.h"

#include "Result.hxx"

namespace linux {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        // Search permission is denied on a component of the path prefix.
        EACCES_ = EACCES,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // An I/O error occurred.
        EIO_ = EIO,

        // Too many symbolic links were encountered in resolving `pathname`.
        ELOOP_ = ELOOP,

        // `pathname` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The file does not exist.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component of the path prefix is not a directory.
        ENOTDIR_ = ENOTDIR,

        // The effective UID does not match the owner of the file,
        // and the process is not privileged.
        EPERM_ = EPERM,

        // The named file resides on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(__syscall2(SYS_chmod, pathname, mode));
}

}
