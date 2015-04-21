#pragma once

#include "c/SYS_mkdir.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
        _(EACCES),
#endif
#if defined(__linux__)
#  include "c/EDQUOT.h"
        _(EDQUOT),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EEXIST.h"
#  include "c/EFAULT.h"
#  include "c/ELOOP.h"
        _(EEXIST),
        _(EFAULT),
        _(ELOOP),
#endif
#if defined(__linux__)
#  include "c/EMLINK.h"
        _(EMLINK),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
#  include "c/ENOMEM.h"
#  include "c/ENOSPC.h"
#  include "c/ENOTDIR.h"
#  include "c/EPERM.h"
#  include "c/EROFS.h"
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOSPC),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
#endif
    };
#undef _

    return Result<void, Error>(SYS_mkdir, pathname, mode);
}

}
