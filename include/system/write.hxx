// -*- C++ -*-
#pragma once

#include "c/size_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
write(int fd, const void* buf, size_t count) noexcept
{
#if defined(__linux__)
#  include "c/EAGAIN.h"
#  include "c/EBADF.h"
#  include "c/EDESTADDRREQ.h"
#  include "c/EDQUOT.h"
#  include "c/EFAULT.h"
#  include "c/EFBIG.h"
#  include "c/EINTR.h"
#  include "c/EINVAL.h"
#  include "c/EIO.h"
#  include "c/ENOSPC.h"
#  include "c/EPIPE.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EAGAIN),
        _(EBADF),
        _(EDESTADDRREQ),
        _(EDQUOT),
        _(EFAULT),
        _(EFBIG),
        _(EINTR),
        _(EINVAL),
        _(EIO),
        _(ENOSPC),
        _(EPIPE),
        // "Other errors may occur, depending on the object connected to `fd`"…
    };

#  undef _
#  include "c/SYS_write.h"

    return Result<size_t, Error>(SYS_write, fd, buf, count);

#else
#  error
#endif
}

}
