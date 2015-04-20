// -*- C++ -*-
#pragma once

#include "c/SYS_stat.h"
#include "c/struct-stat.h"
#include "Result"

namespace system {

static inline
auto
stat(const char* pathname, struct stat* buf) noexcept
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
#  include "c/EIO.h"
        _(EIO),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/ELOOP.h"
#  include "c/ENAMETOOLONG.h"
#  include "c/ENOENT.h"
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
#  include "c/EOVERFLOW.h"
        _(ENOTDIR),
        _(EOVERFLOW),
#endif
    };
#undef _

    return Result<void, Error>(SYS_stat, pathname, buf);
}

}
