#pragma once

#include "EACCES.h"
#include "EAGAIN.h"
#include "EBADF.h"
#include "EDEADLK.h"
#include "EFAULT.h"
#include "EINTR.h"
#include "EINVAL.h"
#include "EMFILE.h"
#include "ENOLCK.h"
#include "EPERM.h"
#include "SYS_fcntl.h"
#include "__syscall2.h"
#include "__syscall3.h"

#include "Result.hxx"

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

    return Result<Ok, Error>(__syscall3(SYS_fcntl, fd, cmd, arg));
}

template <typename Ok>
static inline
auto
fcntl(int fd, int cmd) noexcept
{
    return decltype(fcntl<Ok>(fd, cmd, 0))(__syscall2(SYS_fcntl, fd, cmd));
}

}
