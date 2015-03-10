#ifndef linux_munmap_hxx_
#define linux_munmap_hxx_

#include "c/size_t.h"

#include "c/EINVAL.h"
#include "c/SYS_munmap.h"
#include "linux/_syscall_2.h"

#include "linux/Result.hxx"

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

    return Result<void, Error>(_syscall_2(SYS_munmap, addr, length));
}

} // namespace linux

#endif
