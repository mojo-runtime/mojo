#ifndef linux_uname_hxx_
#define linux_uname_hxx_

#include "linux/_c_syscall1.h"
#include "linux/EFAULT.h"
#include "linux/SYS_uname.h"
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

    return Result<void, Error>(_c_syscall1(SYS_uname, buf));
}

} // namespace linux

#endif
