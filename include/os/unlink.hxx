#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EACCES.h"
#include "c/EBUSY.h"
#include "c/EFAULT.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_unlink.h"

#include "Result.hxx"

namespace os {

static inline
auto
unlink(const char* pathname) noexcept
{
    enum Error
    {
#define _(name) _##name = name
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
#undef _
};

    return Result<void, Error>(SYS_unlink, pathname);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
