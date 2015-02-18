#ifndef linux_open_hxx_
#define linux_open_hxx_

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/EFBIG.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/EMFILE.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENFILE.h"
#include "c/ENODEV.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/ENXIO.h"
#include "c/EOPNOTSUPP.h"
#include "c/EOVERFLOW.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/ETXTBSY.h"
#include "c/EWOULDBLOCK.h"
#include "c/FileDescriptor.h"
#include "c/OpenFlags.h"
#include "c/SYS_open.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
open(const char* pathname, OpenFlags flags) noexcept
{
    enum Error
    {
        EACCES       = EACCES,
        EDQUOT       = EDQUOT,
        EEXIST       = EEXIST,
        EFAULT       = EFAULT,
        EFBIG        = EFBIG,
        EINTR        = EINTR,
        EINVAL       = EINVAL,
        EISDIR       = EISDIR,
        ELOOP        = ELOOP,
        EMFILE       = EMFILE,
        ENAMETOOLONG = ENAMETOOLONG,
        ENFILE       = ENFILE,
        ENODEV       = ENODEV,
        ENOENT       = ENOENT,
        ENOMEM       = ENOMEM,
        ENOSPC       = ENOSPC,
        ENOTDIR      = ENOTDIR,
        ENXIO        = ENXIO,
        EOPNOTSUPP   = EOPNOTSUPP,
        EOVERFLOW    = EOVERFLOW,
        EPERM        = EPERM,
        EROFS        = EROFS,
        ETXTBSY      = ETXTBSY,
        EWOULDBLOCK  = EWOULDBLOCK,
    };

    return Result<FileDescriptor, Error>(_c_syscall2(SYS_open, pathname, flags));
}

} // namespace linux

#endif
