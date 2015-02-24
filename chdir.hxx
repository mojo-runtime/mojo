#ifndef linux_chdir_hxx_
#define linux_chdir_hxx_

#include "EACCES.h"
#include "EFAULT.h"
#include "EIO.h"
#include "ELOOP.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOTDIR.h"
#include "SYS_chdir.h"

#include "linux/Result.hxx"
#include "_internal/_c_syscall1.h"

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

    return Result<void, Error>(_c_syscall1(SYS_chdir, path));
}

} // namespace linux

#endif
