#pragma once

#include "c/SYS_chdir.h"
#include "Result.hxx"

namespace os {

static inline
auto
chdir(const char* path) noexcept
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
#  include "c/EINTR.h"
        _(EINTR),

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
#if defined(__FreeBSD__)
#  include "c/ENOLINK.h"
        _(ENOLINK),
#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"
        _(ENOMEM),

#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ENOTDIR.h"
        _(ENOTDIR),
#endif
    };
#undef _

    return Result<void, Error>(SYS_chdir, path);
}

}
