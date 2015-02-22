#ifndef linux_mmap_hxx_
#define linux_mmap_hxx_

#include "c/EACCES.h"
#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EINVAL.h"
#include "c/ENFILE.h"
#include "c/ENODEV.h"
#include "c/ENOMEM.h"
#include "c/EOVERFLOW.h"
#include "c/EPERM.h"
#include "c/ETXTBSY.h"
#include "c/SYS_mmap.h"
#include "c/off_t.h"
#include "c/size_t.h"
#include "c/extension/x_syscall6.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) noexcept
{
    enum Error
    {
        // A file descriptor refers to a non-regular file.
        // Or a file mapping was requested, but fd is not open for reading.
        // Or MAP_SHARED was requested and PROT_WRITE is set,
        // but `fd` is not open in read/write (O_RDWR) mode.
        // Or PROT_WRITE is set, but the file is append-only.
        EACCES = EACCES,

        // The file has been locked, or too much memory has been locked (see setrlimit(2)).
        EAGAIN = EAGAIN,

        // `fd` is not a valid file descriptor (and MAP_ANONYMOUS was not set).
        EBADF = EBADF,

        // We don't like `addr`, `length`, or `offset`
        // (e.g., they are too large, or not aligned on a page boundary).
        //
        // (since Linux 2.6.12) `length` was 0.
        //
        // `flags` contained neither MAP_PRIVATE or MAP_SHARED, or contained both of these values.
        EINVAL = EINVAL,

        // The system limit on the total number of open files has been reached.
        ENFILE = ENFILE,

        // The underlying filesystem of the specified file does not support memory mapping.
        ENODEV = ENODEV,

        // No memory is available, or
        // the process's maximum number of mappings would have been exceeded.
        ENOMEM = ENOMEM,

        // On 32-bit architecture together with the large file extension (i.e., using 64-bit off_t):
        // the number of pages used for `length` plus number of pages used for `offset`
        // would overflow unsigned long (32 bits).
        EOVERFLOW = EOVERFLOW,

        // The `prot` argument asks for PROT_EXEC
        // but the mapped area belongs to a file on a filesystem that was mounted no-exec.
        EPERM = EPERM,

        // MAP_DENYWRITE was set but the object specified by `fd` is open for writing.
        ETXTBSY = ETXTBSY,
    };

    return Result<void*, Error>(x_syscall6(SYS_mmap, addr, length, prot, flags, fd, offset));
}

} // namespace linux

#endif
