#pragma once

#include "O_WRONLY.h"

#include "../open.hxx"

namespace linux { namespace open_ {

static inline
auto
wronly(const char* pathname) noexcept
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
        EISDIR_       = EISDIR,
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
        // EOVERFLOW
        // EPERM
        EROFS_        = EROFS,
        ETXTBSY_      = ETXTBSY,
        // EWOULDBLOCK
    };

    return open(pathname, O_WRONLY)._with_error<Error>();
}

}}
