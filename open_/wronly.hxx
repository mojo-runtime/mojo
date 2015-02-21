#ifndef linux_open_wronly_hxx_
#define linux_open_wronly_hxx_

#include "c/O_WRONLY.h"

#include "linux/open.hxx"

namespace linux {
namespace open_ {

static inline
auto
wronly(const char* pathname) noexcept
{
    enum Error
    {
        EACCES       = EACCES,
        // EDQUOT
        // EEXIST
        EFAULT       = EFAULT,
        EFBIG        = EFBIG,
        EINTR        = EINTR,
        // EINVAL
        EISDIR       = EISDIR,
        ELOOP        = ELOOP,
        EMFILE       = EMFILE,
        ENAMETOOLONG = ENAMETOOLONG,
        ENFILE       = ENFILE,
        ENODEV       = ENODEV,
        ENOENT       = ENOENT,
        ENOMEM       = ENOMEM,
        // ENOSPC
        ENOTDIR      = ENOTDIR,
        ENXIO        = ENXIO,
        // EOPNOTSUPP
        // EOVERFLOW
        // EPERM
        EROFS        = EROFS,
        ETXTBSY      = ETXTBSY,
        // EWOULDBLOCK
    };

    return open(pathname, O_WRONLY)._with_error<Error>();
}

} // namespace open_
} // namespace linux

#endif
