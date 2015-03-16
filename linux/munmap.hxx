#pragma once

#include "EINVAL.h"
#include "SYS_munmap.h"
#include "size_t.h"
#include "__syscall2.h"

#include "Result.hxx"

namespace linux {

static inline
auto
open(void* addr, size_t length) noexcept
{
    enum Error
    {
        // XXX: documentation sucks
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(__syscall2(SYS_munmap, addr, length));
}

}
