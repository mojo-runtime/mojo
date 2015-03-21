#pragma once

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "c/SYS_inotify_init1.h"

#include "Result.hxx"

namespace linux {

static inline
auto
inotify_init1(int flags) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EINVAL),
        _(EMFILE),
        _(ENFILE),
        _(ENOMEM),
#undef _
    };

    return Result<int, Error>(SYS_inotify_init1, flags);
}

}
