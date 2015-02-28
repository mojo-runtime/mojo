#ifndef linux_fcntl_hxx_
#define linux_fcntl_hxx_

#include "linux/c/_linux_syscall2.h"
#include "linux/c/_linux_syscall3.h"
#include "linux/c/EACCES.h"
#include "linux/c/EAGAIN.h"
#include "linux/c/EBADF.h"
#include "linux/c/EDEADLK.h"
#include "linux/c/EFAULT.h"
#include "linux/c/EINTR.h"
#include "linux/c/EINVAL.h"
#include "linux/c/EMFILE.h"
#include "linux/c/ENOLCK.h"
#include "linux/c/EPERM.h"
#include "linux/c/SYS_fcntl.h"

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

    return Result<Ok, Error>(_linux_syscall3(SYS_fcntl, fd, cmd, arg));
}

template <typename Ok>
static inline
auto
fcntl(int fd, int cmd) noexcept
{
    return decltype(fcntl<Ok>(fd, cmd, 0))(_linux_syscall2(SYS_fcntl, fd, cmd));
}

} // namespace linux

#endif
