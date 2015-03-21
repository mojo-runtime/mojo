#pragma once

#include "Result.hxx"

namespace os {

static inline
auto
symlink(const char* target, const char* linkpath) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EDQUOT.h"
#  include "c/EEXIST.h"
#  include "c/EFAULT.h"
#  include "c/EIO.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
#  include "c/ENOMEM.h"
#  include "c/ENOSPC.h"
#  include "c/ENOTDIR.h"
#  include "c/EPERM.h"
#  include "c/EROFS.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EDQUOT),
        _(EEXIST),
        _(EFAULT),
        _(EIO),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOSPC),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
    };

#  undef _
#  include "c/SYS_symlink.h"

    return Result<void, Error>(SYS_symlink, target, linkpath);

#else
#  error
#endif
}

}
