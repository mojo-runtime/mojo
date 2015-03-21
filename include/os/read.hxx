#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "c/SYS_read.h"
#include "c/size_t.h"

namespace os {

static inline
auto
read(int fd, void* buf, size_t count) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EAGAIN),
        _(EBADF),
        _(EFAULT),
        _(EINTR),
        _(EINVAL),
        _(EIO),
        _(EISDIR),
        // "Other errors may occur, depending on the object connected to `fd`."…
#undef _
    };

    return Result<size_t, Error>(SYS_read, fd, buf, count);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
