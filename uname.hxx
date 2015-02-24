#ifndef linux_uname_hxx_
#define linux_uname_hxx_

#include "EFAULT.h"
#include "SYS_uname.h"
#include "struct-utsname.h"

#include "linux/Result.hxx"
#include "_internal/_c_syscall1.h"

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
