#ifndef linux_chdir_hxx_
#define linux_chdir_hxx_

#include "linux/EACCES.h"
#include "linux/EFAULT.h"
#include "linux/EIO.h"
#include "linux/ELOOP.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ENOMEM.h"
#include "linux/ENOTDIR.h"
#include "linux/SYS_chdir.h"
#include "linux/_c_syscall1.h"

#include "linux/Result.hxx"

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
