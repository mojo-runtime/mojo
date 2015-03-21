#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_chmod.h"

#include "Result.hxx"

namespace os {

static inline
auto
chmod(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
#define _(name) _##name = name
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
#undef _
    };

    return Result<void, Error>(SYS_chmod, pathname, mode);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
