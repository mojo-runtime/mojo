#ifndef linux_uname_hxx_
#define linux_uname_hxx_

#include "linux/c/_linux_syscall1.h"
#include "linux/c/EFAULT.h"
#include "linux/c/SYS_uname.h"
#include "linux/c/struct-utsname.h"

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

    return Result<void, Error>(_linux_syscall1(SYS_uname, buf));
}

} // namespace linux

#endif
