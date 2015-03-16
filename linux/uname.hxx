#pragma once

#include "EFAULT.h"
#include "SYS_uname.h"
#include "struct-utsname.h"
#include "__syscall1.h"

#include "Result.hxx"

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

    return Result<void, Error>(__syscall1(SYS_uname, buf));
}

}
