#pragma once

#include "c/EACCES.h"
#include "c/EBUSY.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/ENOTEMPTY.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_rmdir.h"

#include "Result.hxx"

namespace linux {

static inline
auto
rmdir(const char* pathname) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EACCES),
        _(EBUSY),
        _(EFAULT),
        _(EINVAL),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
        _(ENOTEMPTY),
        _(EPERM),
        _(EROFS),
#undef _
    };

    return Result<void, Error>(SYS_rmdir, pathname);
}

}
