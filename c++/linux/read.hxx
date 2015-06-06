#pragma once

#include <c/size_t.h>

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_read 3
#elif defined(__x86_64__)
#  define __NR_read 0
#else
#  error
#endif

namespace linux {

static inline
auto
read(int fd, void* buffer, size_t length) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(ISDIR),
    };

    return Result<size_t, Error>(__NR_read, fd, buffer, length);
}

}
