#ifndef linux_readlink_hxx_
#define linux_readlink_hxx_

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/SYS_readlink.h"
#include "c/size_t.h"
#include "c/extension/x_syscall3.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
readlink(const char* pathname, char* buf, size_t bufsiz) noexcept
{
    enum Error
    {
        // Search permission is denied for a component of the path prefix.
        EACCES = EACCES,

        // `buf` extends outside the process's allocated address space.
        EFAULT = EFAULT,

        // `bufsiz` is not positive.
        //
        // The named file is not a symbolic link.
        EINVAL = EINVAL,

        // An I/O error occurred while reading from the filesystem.
        EIO = EIO,

        // Too many symbolic links were encountered in translating the pathname.
        ELOOP = ELOOP,

        // A pathname, or a component of a pathname, was too long.
        ENAMETOOLONG = ENAMETOOLONG,

        // The named file does not exist.
        ENOENT = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM = ENOMEM,

        // A component of the path prefix is not a directory.
        ENOTDIR = ENOTDIR,
    };

    return Result<size_t, Error>(x_syscall3(SYS_readlink, pathname, buf, bufsiz));
}

} // namespace linux

#endif
