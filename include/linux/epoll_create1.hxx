#ifndef linux_epoll_create1_hxx_
#define linux_epoll_create1_hxx_

#include "linux/c/_linux_syscall1.h"
#include "linux/c/EINVAL.h"
#include "linux/c/EMFILE.h"
#include "linux/c/ENFILE.h"
#include "linux/c/ENOMEM.h"
#include "linux/c/SYS_epoll_create1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
epoll_create1(int flags) noexcept
{
    enum Error
    {
        // Invalid value specified in `flags`.
        EINVAL_ = EINVAL,

        // The per-user limit on the number of epoll instances imposed by
        // /proc/sys/fs/epoll/max_user_instances was encountered.
        EMFILE_ = EMFILE,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,

        // There was insufficient memory to create the kernel object.
        ENOMEM_ = ENOMEM,
    };

    return Result<int, Error>(_linux_syscall1(SYS_epoll_create1, flags));
}

static inline
auto
epoll_create1() noexcept
{
    enum Error
    {
        // EINVAL
        EMFILE_ = EMFILE,
        ENFILE_ = ENFILE,
        ENOMEM_ = ENOMEM,
    };

    return epoll_create1(0)._with_error<Error>();
}

} // namespace linux

#endif
