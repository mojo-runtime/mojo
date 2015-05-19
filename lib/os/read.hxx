#pragma once

#include <c/SYS_read.h>
#include <c/size_t.h>
#include "Result.hxx"

namespace os {

static inline
auto
read(int fd, void* buf, size_t count) noexcept
{
#define _(name) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EAGAIN.h>
        _(EAGAIN),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EBADF.h>
        _(EBADF),
#endif
#if defined(__FreeBSD__)
#  include <c/EBUSY.h>
        _(EBUSY),
#endif
#if defined(__FreeBSD__)
#  include <c/ECONNRESET.h>
        _(ECONNRESET),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EFAULT.h>
        _(EFAULT),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EINTR.h>
        _(EINTR),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EINVAL.h>
        _(EINVAL),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EIO.h>
        _(EIO),
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EISDIR.h>
        _(EISDIR),
#endif
#if defined(__FreeBSD__)
#  include <c/EOPNOTSUPP.h>
        _(EOPNOTSUPP),
#endif
    };
#undef _

    return Result<size_t, Error>(SYS_read, fd, buf, count);
}

}
