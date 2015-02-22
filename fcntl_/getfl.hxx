#ifndef linux_fcntl_getfl_hxx_
#define linux_fcntl_getfl_hxx_

#include "c/F_GETFL.h"

#include "linux/fcntl.hxx"

namespace linux {
namespace fcntl_ {

// Get the file access mode and the file status flags.
static inline
auto
getfl(int fd) noexcept
{
    enum Error
    {
        EACCES_ = EACCES,
        EAGAIN_ = EAGAIN,
        EBADF_ = EBADF, // → `fd` is not an open file descriptor
        // EDEADLK
        // EFAULT
        // EINTR
        // EINVAL
        // EMFILE
        // ENOLCK
        // EPERM
    };

    return fcntl<int>(fd, F_GETFL)._with_error<Error>();
}

} // namespace fcntl_
} // namespace linux

#endif
