// -*- C++ -*-
#pragma once

#include "c/mode_t.h"
#include "Result"

namespace system {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
#  include "c/EIO.h"
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
        _(EFAULT),
        _(EIO),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
    };
#  undef _
#  include "c/SYS_chmod.h"

    return Result<void, Error>(SYS_chmod, pathname, mode);

#else
#  error
#endif
}

}
