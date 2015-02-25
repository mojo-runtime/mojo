#ifndef linux_munmap_hxx_
#define linux_munmap_hxx_

#include "c/size_t.h"

#include "linux/c/EINVAL.h"
#include "linux/c/SYS_munmap.h"
#include "linux/c/_c_syscall2.h"

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

    return Result<void, Error>(_c_syscall2(SYS_munmap, addr, length));
}

} // namespace linux

#endif
