#ifndef linux_mremap_hxx_
#define linux_mremap_hxx_

#include "EAGAIN.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENOMEM.h"
#include "SYS_mremap.h"
#include "size_t.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_4.h"
#include "abi/_abi_syscall_5.h"

namespace linux {

static inline
auto
mremap(void* old_address, size_t old_size, size_t new_size, int flags) noexcept
{
    enum Error
    {
        // The caller tried to expand a memory segment that is locked, but
        // this was not possible without exceeding the RLIMIT_MEMLOCK resource limit.
        EAGAIN_ = EAGAIN,

        // "Segmentation fault." Some address in the range old_address to old_address+old_size
        // is an invalid virtual memory address for this process. You can also get EFAULT
        // even if there exist mappings that cover the whole address space requested,
        // but those mappings are of different types.
        EFAULT_ = EFAULT,

        // An invalid argument was given.  Possible causes are:
        // old_address  was  not  page  aligned;
        // a value other than MREMAP_MAYMOVE or MREMAP_FIXED was specified in flags;
        // new_size was zero;
        // new_size or new_address was invalid;
        // or the new address range specified by new_address and new_size overlapped
        // the old address range specified by old_address and old_size;
        // or MREMAP_FIXED was specified without also specifying MREMAP_MAYMOVE.
        EINVAL_ = EINVAL,

        // The  memory  area  cannot  be  expanded at the current virtual address,
        // and the MREMAP_MAYMOVE flag is not set in flags.
        //
        // There is not enough (virtual) memory available.
        ENOMEM_ = ENOMEM,
    };

    return Result<void, Error>(
        _abi_syscall_4(SYS_mremap, old_address, old_size, new_size, flags)
    );
}

static inline
auto
mremap(void* old_address, size_t old_size, size_t new_size, int flags, void* new_address) noexcept
{
    return decltype(mremap(old_address, old_size, new_size, flags))(
        _abi_syscall_5(SYS_mremap, old_address, old_size, new_size, flags, new_address)
    );
}

} // namespace linux

#endif