#ifndef linux_munmap_hxx_
#define linux_munmap_hxx_

#include "c/EINVAL.h"
#include "c/SYS_munmap.h"
#include "c/size_t.h"

#include "Result.hxx"
#include "__call-2.hxx"


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

    return Result<void, Error>(__call(SYS_munmap, addr, length));
}

} // namespace linux

#endif
