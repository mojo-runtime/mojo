// -*- C++ -*-
#pragma once

#include "c/SYS_symlink.h"
#include "Result"

namespace system {

static inline
auto
symlink(const char* target, const char* linkpath) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
#  include "c/EDQUOT.h"
#  include "c/EEXIST.h"
#  include "c/EFAULT.h"
#  include "c/EIO.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
        _(EACCES),
        _(EDQUOT),
        _(EEXIST),
        _(EFAULT),
        _(EIO),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOSPC.h"
#  include "c/ENOTDIR.h"
#  include "c/EPERM.h"
#  include "c/EROFS.h"
        _(ENOSPC),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
#endif
    };
#undef _

    return Result<void, Error>(SYS_symlink, target, linkpath);
}

}
