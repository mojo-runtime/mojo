#ifndef linux_open_rdonly_hxx_
#define linux_open_rdonly_hxx_

#include "c/O_RDONLY.h"

#include "../open.hxx"

namespace linux {
namespace open_ {

static inline
auto
rdonly(const char* pathname) noexcept
{
    enum Error
    {
        EACCES_       = EACCES,
        // EDQUOT
        // EEXIST
        EFAULT_       = EFAULT,
        EFBIG_        = EFBIG,
        EINTR_        = EINTR,
        // EINVAL
        // EISDIR
        ELOOP_        = ELOOP,
        EMFILE_       = EMFILE,
        ENAMETOOLONG_ = ENAMETOOLONG,
        ENFILE_       = ENFILE,
        ENODEV_       = ENODEV,
        ENOENT_       = ENOENT,
        ENOMEM_       = ENOMEM,
        // ENOSPC
        ENOTDIR_      = ENOTDIR,
        ENXIO_        = ENXIO,
        // EOPNOTSUPP
        EOVERFLOW_    = EOVERFLOW,
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
