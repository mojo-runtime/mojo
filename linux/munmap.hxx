#ifndef linux_munmap_hxx_
#define linux_munmap_hxx_

#include "EINVAL.h"
#include "SYS_munmap.h"
#include "size_t.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_2.h"

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

    return Result<void, Error>(_abi_syscall_2(SYS_munmap, addr, length));
}

} // namespace linux

#endif
