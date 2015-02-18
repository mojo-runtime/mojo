#ifndef linux_munmap_hxx_
#define linux_munmap_hxx_

#include "c/EINVAL.h"
#include "c/SYS_munmap.h"
#include "c/size_t.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
open(void* addr, size_t length) noexcept
{
    enum Error
    {
        // XXX: documentation sucks
        EINVAL = EINVAL,
    };

    return Result<void, Error>(_c_syscall2(SYS_munmap, addr, length));
}

} // namespace linux

#endif
