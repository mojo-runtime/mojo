#pragma once

#include "c/EINVAL.h"
#include "c/size_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_munmap 91
#elif defined(__x86_64__)
#  define __NR_munmap 11
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
munmap(void* address, size_t length) noexcept
{
    enum Error
    {
        _E(INVAL),
    };

    return Result<void, Error>(__NR_munmap, address, length);
}

}}
