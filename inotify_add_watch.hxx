#ifndef linux_inotify_add_watch_hxx_
#define linux_inotify_add_watch_hxx_

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ENOMEM.h"
#include "c/ENOSPC.h"
#include "c/SYS_inotify_add_watch.h"
#include "c/uint32_t.h"
#include "c/extension/x_syscall3.h"

#include "linux/Result.hxx"

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

    return Result<int, Error>(x_syscall3(SYS_inotify_add_watch, fd, pathname, mask));
}

} // namespace linux

#endif
