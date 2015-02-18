#ifndef linux_fstat_hxx_
#define linux_fstat_hxx_

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_fstat.h"
#include "c/stat.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
fstat(int fd, struct stat* buffer) noexcept
{
    enum Error
    {
        EACCES       = EACCES,       // TODO: `stat` only?
        EBADF        = EBADF,
        EFAULT       = EFAULT,
        ELOOP        = ELOOP,        // TODO: `stat` only?
        ENAMETOOLONG = ENAMETOOLONG, // TODO: `stat` only?
        ENOENT       = ENOENT,       // TODO: `stat` only?
        ENOMEM       = ENOMEM,
        ENOTDIR      = ENOTDIR,      // TODO: `stat` only?
        EOVERFLOW    = EOVERFLOW,    // TODO: prune for architectures where this can't occur?
    };

    return Result<void, Error>(_c_syscall2(SYS_fstat, fd, buffer));
}

} // namespace linux

#endif
