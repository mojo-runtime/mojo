#pragma once

#include "Result.hxx"

namespace system {

static inline
auto
inotify_init1(int flags) noexcept
{
#if defined(__linux__)
#  include "c/EINVAL.h"
#  include "c/EMFILE.h"
#  include "c/ENFILE.h"
#  include "c/ENOMEM.h"
#  define _(name, doc) _##name = name

    enum Error
    {
        _(EINVAL,
          "An invalid value was specified in `flags`."),

        _(EMFILE,
          "The user limit on the total number of inotify instances has been reached."),

        _(ENFILE,
          "The system limit on the total number of file descriptors has been reached."),

        _(ENOMEM,
          "Insufficient kernel memory is available."),
    };

#  undef _
#  include "c/SYS_inotify_init1.h"

    return Result<int, Error>(SYS_inotify_init1, flags);

#else
#  error
#endif
}

}
