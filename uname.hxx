#ifndef linux_uname_hxx_
#define linux_uname_hxx_

#include "c/EFAULT.h"
#include "c/SYS_uname.h"
#include "c/struct-utsname.h"
#include "linux/__call1.hxx"

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

    return Result<void, Error>(__call1(SYS_uname, buf));
}

} // namespace linux

#endif
