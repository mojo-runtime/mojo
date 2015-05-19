#pragma once

#include <c/SYS_write.h>
#include <c/size_t.h>
#include "Result.hxx"

namespace os {

static inline
auto
write(int fd, const void* buf, size_t count) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EAGAIN.h>
        _(EAGAIN),
#  include <c/EBADF.h>
        _(EBADF),
#  include <c/EDESTADDRREQ.h>
        _(EDESTADDRREQ),
#  include <c/EDQUOT.h>
        _(EDQUOT),
#  include <c/EFAULT.h>
        _(EFAULT),
#  include <c/EFBIG.h>
        _(EFBIG),
#  include <c/EINTR.h>
        _(EINTR),
#  include <c/EINVAL.h>
        _(EINVAL),
#  include <c/EIO.h>
        _(EIO),
#  include <c/ENOSPC.h>
        _(ENOSPC),
#  include <c/EPIPE.h>
        _(EPIPE),
#endif
        // "Other errors may occur, depending on the object connected to `fd`"…
    };
#undef _

    return Result<size_t, Error>(SYS_write, fd, buf, count);
}

}
