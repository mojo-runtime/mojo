// -*- C++ -*-
#pragma once

#include "Result.hxx"

namespace system {

static inline
auto
unlink(const char* pathname) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EBUSY.h"
#  include "c/EFAULT.h"
#  include "c/EIO.h"
#  include "c/EISDIR.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
#  include "c/ENOMEM.h"
#  include "c/ENOTDIR.h"
#  include "c/EPERM.h"
#  include "c/EROFS.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EBUSY),
        _(EFAULT),
        _(EIO),
        _(EISDIR),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
};

#  undef _
#  include "c/SYS_unlink.h"

    return Result<void, Error>(SYS_unlink, pathname);

#else
#  error
#endif
}

}
