#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EACCES.h"
#include "c/EDQUOT.h"
#include "c/EEXIST.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/EMLINK.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/ENOTDIR.h"
#include "c/EPERM.h"
#include "c/EROFS.h"
#include "c/SYS_mkdir.h"
#include "c/mode_t.h"

#include "Result.hxx"

namespace os {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EACCES),
        _(EDQUOT),
        _(EEXIST),
        _(EFAULT),
        _(ELOOP),
        _(EMLINK),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOSPC),
        _(ENOTDIR),
        _(EPERM),
        _(EROFS),
#undef _
    };

    return Result<void, Error>(SYS_mkdir, pathname, mode);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
