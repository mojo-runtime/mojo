#ifndef linux_inotify_add_watch_hxx_
#define linux_inotify_add_watch_hxx_

#include "EACCES.h"
#include "EBADF.h"
#include "EFAULT.h"
#include "EINVAL.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "SYS_inotify_add_watch.h"
#include "uint32_t.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_3.h"

namespace linux {

static inline
auto
inotify_add_watch(int fd, const char* pathname, uint32_t mask) noexcept
{
    enum Error
    {
        // Read access to the given file is not permitted.
        EACCES_ = EACCES,

        // The given file descriptor is not valid.
        EBADF_ = EBADF,

        // `pathname` points outside of the process's accessible address space.
        EFAULT_ = EFAULT,

        // The given event mask contains no valid events.
        //
        // `fd` is not an inotify file descriptor.
        EINVAL_ = EINVAL,

        // `pathname` is too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A directory component in `pathname` does not exist or is a dangling symbolic link.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // The user limit on the total number of inotify watches was reached.
        //
        // The kernel failed to allocate a needed resource.
        ENOSPC_ = ENOSPC,
    };

    return Result<int, Error>(_abi_syscall_3(SYS_inotify_add_watch, fd, pathname, mask));
}

} // namespace linux

#endif
