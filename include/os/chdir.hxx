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
#include "c/SYS_chdir.h"

#include "Result.hxx"

namespace os {

static inline
auto
chdir(const char* path) noexcept
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
#undef _
    };

    return Result<void, Error>(SYS_chdir, path);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
