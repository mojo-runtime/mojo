// -*- C++ -*-
#pragma once

#include "c/SYS_unlink.h"
#include "Result"

namespace system {

static inline
auto
unlink(const char* pathname) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
        _(EACCES),
#endif
#if defined(__linux__)
#  include "c/EBUSY.h"
        _(EBUSY),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EFAULT.h"
#  include "c/EIO.h"
#  include "c/EISDIR.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
        _(EFAULT),
        _(EIO),
        _(EISDIR),
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
#  include "c/EPERM.h"
#  include "c/EROFS.h"
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
#endif
    };
#undef _

    return Result<void, Error>(SYS_unlink, pathname);
}

}
