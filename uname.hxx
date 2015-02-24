#ifndef linux_uname_hxx_
#define linux_uname_hxx_

#include "EFAULT.h"
#include "SYS_uname.h"
#include "struct-utsname.h"

#include "linux/Result.hxx"
#include "linux/__call1.hxx"

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
