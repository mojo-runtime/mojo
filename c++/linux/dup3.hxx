#pragma once

#include "c/EBADF.h"
#include "c/EBUSY.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_dup3 358
#elif defined(__x86_64__)
#  define __NR_dup3 292
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
dup3(int oldfd, int newfd, int flags) noexcept
{
    enum Error
    {
        _E(BADF),
        _E(BUSY),
        _E(INTR),
        _E(INVAL),
        _E(MFILE),
    };

    return Result<int, Error>(__NR_dup3, oldfd, newfd, flags);
}

}}
