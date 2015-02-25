#ifndef linux_mmap_hxx_
#define linux_mmap_hxx_

#include "EACCES.h"
#include "EAGAIN.h"
#include "EBADF.h"
#include "EINVAL.h"
#include "ENFILE.h"
#include "ENODEV.h"
#include "ENOMEM.h"
#include "EOVERFLOW.h"
#include "EPERM.h"
#include "ETXTBSY.h"
#include "SYS_mmap.h"
#include "off_t.h"
#include "size_t.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_6.h"

namespace linux {

static inline
auto
mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) noexcept
{
    enum Error
    {
        // A file descriptor refers to a non-regular file.
        //
        // A file mapping was requested, but fd is not open for reading.
        //
        // MAP_SHARED was requested and PROT_WRITE is set,
        // but `fd` is not open in read/write (O_RDWR) mode.
        //
        // PROT_WRITE is set, but the file is append-only.
        EACCES_ = EACCES,

        // The file has been locked.
        //
        // Too much memory has been locked (see setrlimit(2)).
        EAGAIN_ = EAGAIN,

        // `fd` is not a valid file descriptor (and MAP_ANONYMOUS was not set).
        EBADF_ = EBADF,

        // We don't like `addr`, `length`, or `offset`
        // (e.g., they are too large, or not aligned on a page boundary).
        //
        // (since Linux 2.6.12) `length` was 0.
        //
        // `flags` contained neither MAP_PRIVATE or MAP_SHARED, or contained both of these values.
        EINVAL_ = EINVAL,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,

        // The underlying filesystem of the specified file does not support memory mapping.
        ENODEV_ = ENODEV,

        // No memory is available.
        //
        // The process's maximum number of mappings would have been exceeded.
        ENOMEM_ = ENOMEM,

        // On 32-bit architecture together with the large file extension (i.e., using 64-bit off_t):
        // the number of pages used for `length` plus number of pages used for `offset`
        // would overflow unsigned long (32 bits).
        EOVERFLOW_ = EOVERFLOW,

        // The `prot` argument asks for PROT_EXEC
        // but the mapped area belongs to a file on a filesystem that was mounted no-exec.
        EPERM_ = EPERM,

        // MAP_DENYWRITE was set but the object specified by `fd` is open for writing.
        ETXTBSY_ = ETXTBSY
    };

    return Result<void*, Error>(_abi_syscall_6(SYS_mmap, addr, length, prot, flags, fd, offset));
}

} // namespace linux

#endif
