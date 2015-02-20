#ifndef linux_write_from_hxx_
#define linux_write_from_hxx_

#include "linux/write.hxx"

namespace linux {
namespace write_ {

template <typename T, size_t n>
static inline
auto
from(int fd, const T(& array)[n]) noexcept
{
    enum Error
    {
        EAGAIN_or_EWOULDBLOCK = EAGAIN,
        EBADF = EBADF,
        EDESTADDRREQ = EDESTADDRREQ,
        EDQUOT = EDQUOT,
        // EFAULT
        EFBIG = EFBIG,
        EINTR = EINTR,
        EINVAL = EINVAL,
        EIO = EIO,
        ENOSPC = ENOSPC,
        EPIPE = EPIPE,
        // XXX: Other errors may occur, depending on the object connected to fd.
    };

    // We can't use write(...)._with_error; see `read_::into`.
    return Result<size_t, Error>(_c_syscall3(SYS_write, fd, array, n * sizeof(T)));
}

} // namespace write_
} // namespace linux

#endif
