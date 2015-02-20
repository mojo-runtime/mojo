#ifndef linux_read_into_hxx_
#define linux_read_into_hxx_

#include "linux/read.hxx"

namespace linux {
namespace read_ {

template <typename T, size_t n>
static inline
auto
into(int fd, T(& array)[n]) noexcept
{
    enum Error
    {
        EAGAIN_or_EWOULDBLOCK = EAGAIN,
        EBADF                 = EBADF,
        // EFAULT
        EINTR                 = EINTR,
        EINVAL                = EINVAL,
        EIO                   = EIO,
        EISDIR                = EISDIR,
        // XXX: Other errors may occur, depending on the object connected to fd.
    };

    // Clang was successively confused by these:
    // return read(fd, array, n * sizeof(T))._with_error<Error>();
    // return read(fd, array, n * sizeof(T)).template _with_error<Error>();

    return Result<size_t, Error>(_c_syscall3(SYS_read, fd, array, n * sizeof(T)));
}

} // namespace read_
} // namespace linux

#endif
