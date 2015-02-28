#ifndef linux_getcwd_hxx_
#define linux_getcwd_hxx_

#include "c/size_t.h"

#include "linux/EACCES.h"
#include "linux/EFAULT.h"
#include "linux/EINVAL.h"
#include "linux/ENAMETOOLONG.h"
#include "linux/ENOENT.h"
#include "linux/ERANGE.h"
#include "linux/SYS_getcwd.h"
#include "linux/_syscall_2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
getcwd(char* buf, size_t size) noexcept
{
    enum Error
    {
        // Permission to read or search a component of the filename was denied.
        EACCES_ = EACCES,

        // `buf` points to a bad address.
        EFAULT_ = EFAULT,

        // The `size` argument is zero and `buf` is not a null pointer.
        EINVAL_ = EINVAL,

        // The current working directory has been unlinked.
        ENOENT_ = ENOENT,

        // The size argument is less than the length of the absolute pathname
        // of the working directory, including the terminating null byte.
        // You need to allocate a bigger array and try again.
        ERANGE_ = ERANGE,
    };

    // "On success, these functions return a pointer to a string
    // containing the pathname of the current working directory...
    // this is the same value as buf."
    //
    // BUT, the kernel source states:
    //
    // "The kernel system call just returns the length of the buffer filled
    // (which includes the ending '\0' character)"

    return Result<size_t, Error>(_syscall_2(SYS_getcwd, buf, size));
}

} // namespace linux

#endif
