#pragma once

#include "c/EBADF.h"
#include "c/EINTR.h"
#include "c/EIO.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_close 6
#elif defined(__x86_64__)
#  define __NR_close 3
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
close(int fd) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(INTR),
        _E(IO),
    };

    return Result<void, Error>(__NR_close, fd);
}

}}
