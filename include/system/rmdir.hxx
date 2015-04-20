// -*- C++ -*-
#pragma once

#include "c/SYS_rmdir.h"
#include "Result.hxx"

namespace system {

static inline
auto
rmdir(const char* pathname) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
#  include "c/EBUSY.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
        _(EACCES),
        _(EBUSY),
        _(EFAULT),
        _(EINVAL),
#endif
#if defined(__FreeBSD__)
#  include "c/EIO.h"
        _(EIO),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOTDIR.h"
#  include "c/ENOTEMPTY.h"
#  include "c/EPERM.h"
#  include "c/EROFS.h"
        _(ENOTDIR),
        _(ENOTEMPTY),
        _(EPERM),
        _(EROFS),
#endif
    };
#undef _

    return Result<void, Error>(SYS_rmdir, pathname);
}

}
