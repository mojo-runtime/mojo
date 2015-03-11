#ifndef _os_linux_munmap_hxx_
#define _os_linux_munmap_hxx_

#include "c/EINVAL.h"
#include "c/SYS_munmap.h"
#include "c/size_t.h"

#include "Result.hxx"
#include "__call-2.hxx"

namespace os { inline namespace _linux_ {

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

}}

#endif
