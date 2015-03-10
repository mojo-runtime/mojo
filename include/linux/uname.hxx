#ifndef linux_uname_hxx_
#define linux_uname_hxx_

#include "linux/_syscall_1.h"
#include "c/EFAULT.h"
#include "c/SYS_uname.h"
#include "linux/struct-utsname.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
uname(struct utsname* buf) noexcept
{
    enum Error
    {
        // `buf` is not valid.
        EFAULT_ = EFAULT,
    };

    return Result<void, Error>(_syscall_1(SYS_uname, buf));
}

} // namespace linux

#endif
