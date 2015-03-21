#pragma once

#include "c/struct utsname.h"
#include "Result.hxx"

namespace os {

static inline
auto
uname(struct utsname* buf) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
    };

#  undef _
#  include "c/SYS_uname.h"

    return Result<void, Error>(SYS_uname, buf);

#else
#  error
#endif
}

}
