#ifndef _os_linux_epoll_create1_hxx_
#define _os_linux_epoll_create1_hxx_

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "c/SYS_epoll_create1.h"

#include "Result.hxx"
#include "__call-1.hxx"

namespace os { inline namespace _linux_ {

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

    return Result<int, Error>(__call(SYS_epoll_create1, flags));
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

}}

#endif
