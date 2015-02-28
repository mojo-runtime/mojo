#ifndef linux_epoll_wait_hxx_
#define linux_epoll_wait_hxx_

#include "linux/_syscall_4.h"
#include "linux/EBADF.h"
#include "linux/EFAULT.h"
#include "linux/EINTR.h"
#include "linux/EINVAL.h"
#include "linux/SYS_epoll_wait.h"
#include "linux/struct-epoll_event.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
epoll_wait(int epfd, struct epoll_event* events, int maxevents, int timeout) noexcept
{
    enum Error
    {
        // `epfd` is not a valid file descriptor.
        EBADF_ = EBADF,

        // The memory area pointed to by `events` is not accessible with write permissions.
        EFAULT_ = EFAULT,

        // The call was interrupted by a signal handler before either
        // (1) any of the requested events occurred or (2) the timeout expired;
        EINTR_ = EINTR,

        // `epfd` is not an epoll file descriptor.
        //
        // `maxevents` is less than or equal to zero.
        EINVAL_ = EINVAL,
    };

    // When successful, epoll_wait() returns the number of file descriptors
    // ready for the requested I/O, or zero if no file descriptor became ready
    // during the requested `timeout` milliseconds.

    // ... unsigned, I guess?

    return Result<unsigned, Error>(_syscall_4(SYS_epoll_wait, epfd, events, maxevents, timeout));
}

} // namespace linux

#endif
