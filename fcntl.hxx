#ifndef linux_fcntl_hxx_
#define linux_fcntl_hxx_

#include "c/EACCES.h"
#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EDEADLK.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENOLCK.h"
#include "c/EPERM.h"
#include "c/SYS_fcntl.h"
#include "linux/__call2.hxx"
#include "linux/__call3.hxx"

#include "linux/Result.hxx"

namespace linux {

template <typename Ok, typename Arg>
static inline
auto
fcntl(int fd, int cmd, Arg arg) noexcept
{
    enum Error
    {
        // Operation is prohibited by locks held by other processes.
        EACCES_ = EACCES,

        // Operation is prohibited by locks held by other processes.
        //
        // The operation is prohibited because the file has been memory-mapped by another process.
        EAGAIN_ = EAGAIN,

        // `fd` is not an open file descriptor.
        //
        // The command was F_SETLK or F_SETLKW
        // and the file descriptor open mode doesn't match with the type of lock requested.
        EBADF_ = EBADF,

        // It was detected that the specified F_SETLKW command would cause a deadlock.
        EDEADLK_ = EDEADLK,

        // `lock` is outside your accessible address space.
        EFAULT_ = EFAULT,

        // For F_SETLKW,
        // the command was interrupted by a signal; see signal(7).
        //
        // For F_GETLK and F_SETLK,
        // the command was interrupted by a signal before the lock was checked or acquired.
        // Most likely when locking a remote file (e.g., locking over NFS),
        // but can sometimes happen locally.
        EINTR_ = EINTR,

        // For F_DUPFD,
        // `arg` is negative or is greater than the maximum allowable value.
        //
        // For F_SETSIG,
        // `arg` is not an allowable signal number.
        EINVAL_ = EINVAL,

        // For F_DUPFD,
        // the process already has the maximum number of file descriptors open.
        EMFILE_ = EMFILE,

        // Too many segment locks open.
        //
        // Lock table is full.
        //
        // A remote locking protocol failed (e.g., locking over NFS).
        ENOLCK_ = ENOLCK,

        // Attempted to clear the O_APPEND flag on a file that has the append-only attribute set.
        EPERM_ = EPERM,
    };

    return Result<Ok, Error>(__call3(SYS_fcntl, fd, cmd, arg));
}

template <typename Ok>
static inline
auto
fcntl(int fd, int cmd) noexcept
{
    return decltype(fcntl<Ok>(fd, cmd, 0))(__call2(SYS_fcntl, fd, cmd));
}

} // namespace linux

#endif
