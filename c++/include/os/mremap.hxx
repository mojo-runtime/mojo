#pragma once

#include "c/size_t.h"
#include "Result.hxx"

namespace os {

static inline
auto
mremap(void*  old_address,
       size_t old_size,
       size_t new_size,
       int    flags,
       void*  new_address) noexcept
{
#if defined(__linux__)
#  include "c/EAGAIN.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/ENOMEM.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EAGAIN),
        _(EFAULT),
        _(EINVAL),
        _(ENOMEM),
    };

#  undef _
#  include "c/SYS_mremap.h"

    return Result<void*, Error>(SYS_mremap, old_address, old_size, new_size, flags, new_address);

#else
#  error
#endif
}

}
