#pragma once

#include "c/EINVAL.h"
#include "c/SYS_munmap.h"
#include "c/size_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
munmap(void* address, size_t length) noexcept
{
    enum Error
    {
        _E(INVAL),
    };

    return Result<void, Error>(SYS_munmap, address, length);
}

}}
