#pragma once

#include "c/EAGAIN.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOMEM.h"
#include "c/SYS_mremap.h"
#include "c/size_t.h"

#include "Result.hxx"

namespace linux {

static inline
auto
mremap(void*  old_address,
       size_t old_size,
       size_t new_size,
       int    flags,
       void*  new_address) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EAGAIN),
        _(EFAULT),
        _(EINVAL),
        _(ENOMEM),
#undef _
    };

    return Result<void*, Error>(SYS_mremap, old_address, old_size, new_size, flags, new_address);
}

}
