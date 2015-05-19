#pragma once

#include "Result.hxx"

namespace os {

static inline
auto
dup3(int oldfd, int newfd, int flags) noexcept
{
#if defined(__linux__)
#  include <c/EBADF.h>
#  include <c/EBUSY.h>
#  include <c/EINTR.h>
#  include <c/EINVAL.h>
#  include <c/EMFILE.h>
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EBUSY),
        _(EINTR),
        _(EINVAL),
        _(EMFILE),
    };

#  undef _
#  include <c/SYS_dup3.h>

    return Result<int, Error>(SYS_dup3, oldfd, newfd, flags);

#else
#  error
#endif
}

}
