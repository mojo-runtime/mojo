// -*- C++ -*-
#pragma once

#include "c/struct stat.h"
#include "Result"

namespace system {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
{
#if defined(__linux__)
#  include "c/EACCES.h"
#  include "c/EFAULT.h"
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
#  include "c/ENOMEM.h"
#  include "c/ENOTDIR.h"
#  include "c/EOVERFLOW.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EFAULT),
        _(ELOOP),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOTDIR),
        _(EOVERFLOW),
    };

#  undef _
#  include "c/SYS_stat.h"

    return Result<void, Error>(SYS_stat, pathname, buf);

#else
#  error
#endif
}

}
