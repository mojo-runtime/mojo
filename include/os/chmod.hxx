#pragma once

#include "c/SYS_chmod.h"
#include "c/mode_t.h"
#include "Result.hxx"

namespace os {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
        _(EACCES),
        _(EFAULT),
#endif
#if defined(__FreeBSD__)
#  include "c/EFTYPE.h"
        _(EFTYPE),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/EIO.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
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
#  include "c/ENOTDIR.h"
#  include "c/EPERM.h"
#  include "c/EROFS.h"
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
#endif
    };
#undef _

    return Result<void, Error>(SYS_chmod, pathname, mode);
}

}
