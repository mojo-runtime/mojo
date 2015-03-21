#pragma once

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDESTADDRREQ.h"
#include "c/EDQUOT.h"
#include "c/EFAULT.h"
#include "c/EFBIG.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/ENOSPC.h"
#include "c/EPIPE.h"
#include "c/SYS_write.h"
#include "c/size_t.h"

#include "Result.hxx"

namespace linux {

static inline
auto
write(int fd, const void* buf, size_t count) noexcept
{
    enum Error
    {
#define _(name) _##name = name
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
#undef _
    };

    return Result<size_t, Error>(SYS_write, fd, buf, count);
}

}
