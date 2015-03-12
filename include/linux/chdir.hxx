#ifndef _linux_chdir_hxx_
#define _linux_chdir_hxx_

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/SYS_chdir.h"

#include "Result.hxx"
#include "__call-1.hxx"

namespace linux {

static inline
auto
chdir(const char* path) noexcept
{
    // TODO(?): "The more general errors for chdir() are listed below:

    enum Error
    {
        // Search permission is denied for one of the components of `path`.
        EACCES_ = EACCES,

        // `path` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // An I/O error occurred.
        EIO_ = EIO,

        // Too many symbolic links were encountered in resolving `path`.
        ELOOP_ = ELOOP,

        // `path` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // The file does not exist.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // A component of `path` is not a directory.
        ENOTDIR_ = ENOTDIR,
    };

    return Result<void, Error>(__call(SYS_chdir, path));
}

}

#endif
