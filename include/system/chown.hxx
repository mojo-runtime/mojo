#pragma once

#include "c/gid_t.h"
#include "c/uid_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
chown(const char* pathname, uid_t owner, gid_t group) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
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
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
    };

#  undef _
#  include "c/SYS_chown.h"

    return Result<void, Error>(SYS_chown, pathname, owner, group);

#else
#  error
#endif
}

}
