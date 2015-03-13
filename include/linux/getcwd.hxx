#ifndef _linux_getcwd_hxx_
#define _linux_getcwd_hxx_

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ERANGE.h"
#include "c/SYS_getcwd.h"
#include "c/size_t.h"

#include "Result.hxx"
#include "abi/syscall-2.hxx"

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

    return Result<size_t, Error>(abi::syscall(SYS_getcwd, buf, size));
}

}

#endif
