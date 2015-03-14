#pragma once

#include "c/EFAULT.h"
#include "c/SYS_uname.h"
#include "c/struct-utsname.h"

#include "Result.hxx"
#include "abi/syscall-1.hxx"

namespace linux {

static inline
auto
uname(struct utsname* buf) noexcept
{
    enum Error
    {
        // `buf` is not valid.
        EFAULT_ = EFAULT,
    };

    return Result<void, Error>(abi::syscall(SYS_uname, buf));
}

}
