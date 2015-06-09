#pragma once

#include <c/size_t.h>
#include "errno/EINVAL.h"
#include "Result.hxx"

#define __NR_munmap 73

namespace freebsd {

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

}
