#ifndef _os_linux_mremap_hxx_
#define _os_linux_mremap_hxx_

#include "c/EAGAIN.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENOMEM.h"
#include "c/SYS_mremap.h"
#include "c/size_t.h"

#include "Result.hxx"
#include "__call-4.hxx"
#include "__call-5.hxx"

namespace os { inline namespace _linux_ {

static inline
auto
mremap(void* old_address, size_t old_size, size_t new_size, int flags) noexcept
{
    enum Error
    {
        // The caller tried to expand a memory segment that is locked, but
        // this was not possible without exceeding the RLIMIT_MEMLOCK resource limit.
        EAGAIN_ = EAGAIN,

        // "c/Segmentation fault." Some address in the range old_address to old_address+old_size
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
        __call(SYS_mremap, old_address, old_size, new_size, flags)
    );
}

static inline
auto
mremap(void* old_address, size_t old_size, size_t new_size, int flags, void* new_address) noexcept
{
    return decltype(mremap(old_address, old_size, new_size, flags))(
        __call(SYS_mremap, old_address, old_size, new_size, flags, new_address)
    );
}

}}

#endif
