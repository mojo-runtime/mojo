#ifndef linux_munmap_hxx_
#define linux_munmap_hxx_

#include "EINVAL.h"
#include "SYS_munmap.h"
#include "size_t.h"

#include "linux/Result.hxx"
#include "linux/__call2.hxx"

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

    return Result<void, Error>(__call2(SYS_munmap, addr, length));
}

} // namespace linux

#endif
