#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/ELOOP.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOTDIR.h"
#include "c/EOVERFLOW.h"
#include "c/SYS_stat.h"
#include "c/struct stat.h"

namespace os {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EACCES),
        _(EFAULT),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
        _(EOVERFLOW),
#undef _
    };

    return Result<void, Error>(SYS_stat, pathname, buf);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
