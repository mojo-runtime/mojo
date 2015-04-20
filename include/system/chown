// -*- C++ -*-
#pragma once

#include "c/SYS_chown.h"
#include "c/gid_t.h"
#include "c/uid_t.h"
#include "Result"

namespace system {

static inline
auto
chown(const char* pathname, uid_t owner, gid_t group) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
        _(EACCES),
        _(EFAULT),
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
#  include "c/EPERM.h"
#  include "c/EROFS.h"
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
#endif
    };
#undef _

    return Result<void, Error>(SYS_chown, pathname, owner, group);
}

}
