#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/SYS_inotify_add_watch.h"
#include "c/uint32_t.h"

#include "Result.hxx"

namespace linux {

static inline
auto
inotify_add_watch(int fd, const char* pathname, uint32_t mask) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EACCES),
        _(EBADF),
        _(EFAULT),
        _(EINVAL),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ENOMEM),
        _(ENOSPC),
#undef _
    };

    return Result<int, Error>(SYS_inotify_add_watch, fd, pathname, mask);
}

}
