#pragma once

#include "EINVAL.h"
#include "SYS_munmap.h"
#include "size_t.h"

#include "Result.hxx"
#include "abi/syscall-2.hxx"

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

    return Result<void, Error>(abi::syscall(SYS_munmap, addr, length));
}

}
