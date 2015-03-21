#pragma once

#include "Result.hxx"

namespace os {

static inline
auto
close(int fd) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EINTR.h"
#  include "c/EIO.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EINTR),
        _(EIO),
    };

#  undef _
#  include "c/SYS_close.h"

    return Result<void, Error>(SYS_close, fd);

#else
#  error
#endif
}

}
