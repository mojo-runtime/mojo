#ifndef linux_open_read_only_hxx_
#define linux_open_read_only_hxx_

#include "c/O_RDONLY.h"

#include "linux/open.hxx"

namespace linux {
namespace open_ {

static inline
auto
read_only(const char* pathname) noexcept
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
        // EISDIR
        ELOOP        = ELOOP,
        EMFILE       = EMFILE,
        ENAMETOOLONG = ENAMETOOLONG,
        ENFILE       = ENFILE,
        ENODEV       = ENODEV,
        ENOENT       = ENOENT,
        ENOMEM       = ENOMEM,
        // ENOSPC
        ENOTDIR      = ENOTDIR,
        // ENXIO
        // EOPNOTSUPP
        EOVERFLOW    = EOVERFLOW,
        // EPERM
        // EROFS
        // ETXTBSY
        // EWOULDBLOCK
    };

    return open(pathname, O_RDONLY)._with_error<Error>();
}

} // namespace open_
} // namespace linux

#endif
