#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "c/EINVAL.h"
#include "c/SYS_munmap.h"
#include "c/size_t.h"

#include "Result.hxx"

namespace os {

static inline
auto
munmap(void* addr, size_t length) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EINVAL),
#undef _
    };

    return Result<void, Error>(SYS_munmap, addr, length);
}

}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
