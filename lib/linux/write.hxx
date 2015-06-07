#pragma once

#include <c/size_t.h>

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
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_write 4
#elif defined(__x86_64__)
#  define __NR_write 1
#else
#  error
#endif

namespace linux {

static inline
auto
write(int fd, const void* buffer, size_t length) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(DESTADDRREQ),
        _E(DQUOT),
        _E(FAULT),
        _E(FBIG),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(NOSPC),
        _E(PIPE),
    };

    return Result<size_t, Error>(__NR_write, fd, buffer, length);
}

}
