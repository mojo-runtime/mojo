#pragma once

#include "c/size_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
read(int fd, void* buf, size_t count) noexcept
{
#if defined(__linux__)
#  include "c/EAGAIN.h"
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  include "c/EIO.h"
#  include "c/EISDIR.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EAGAIN),
        _(EBADF),
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
        _(EIO),
        _(EISDIR),
        // "Other errors may occur, depending on the object connected to `fd`."…
    };

#  undef _
#  include "c/SYS_read.h"

    return Result<size_t, Error>(SYS_read, fd, buf, count);

#else
#  error
#endif
}

}
