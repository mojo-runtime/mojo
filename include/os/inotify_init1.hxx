#pragma once

#include "Result.hxx"

namespace os {

static inline
auto
inotify_init1(int flags) noexcept
{
#if defined(__linux__)
#  include "c/EINVAL.h"
#  include "c/EMFILE.h"
#  include "c/ENFILE.h"
#  include "c/ENOMEM.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EINVAL),
        _(EMFILE),
        _(ENFILE),
        _(ENOMEM),
    };

#  undef _
#  include "c/SYS_inotify_init1.h"

    return Result<int, Error>(SYS_inotify_init1, flags);

#else
#  error
#endif
}

}
