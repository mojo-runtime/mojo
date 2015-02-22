#ifndef linux_epoll_create1_hxx_
#define linux_epoll_create1_hxx_

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "c/SYS_epoll_create1.h"
#include "c/extension/x_syscall1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
epoll_create1(int flags) noexcept
{
    enum Error
    {
        // Invalid value specified in `flags`.
        EINVAL = EINVAL,

        // The per-user limit on the number of epoll instances imposed by
        // /proc/sys/fs/epoll/max_user_instances was encountered.
        EMFILE = EMFILE,

        // The system limit on the total number of open files has been reached.
        ENFILE = ENFILE,

        // There was insufficient memory to create the kernel object.
        ENOMEM = ENOMEM,
    };

    return Result<int, Error>(x_syscall1(SYS_epoll_create1, flags));
}

static inline
auto
epoll_create1() noexcept
{
    enum Error
    {
        // EINVAL
        EMFILE = EMFILE,
        ENFILE = ENFILE,
        ENOMEM = ENOMEM,
    };

    return epoll_create1(0)._with_error<Error>();
}

} // namespace linux

#endif
