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
#include "c/FileDescriptor.h"
#include "c/MemoryMapFlags.h"
#include "c/MemoryProtection.h"
#include "c/SYS_mmap.h"
#include "c/off_t.h"
#include "c/size_t.h"
#include "c/_c_syscall6.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
open(void*            addr,
     size_t           length,
     MemoryProtection prot,
     MemoryMapFlags   flags,
     FileDescriptor   fd,
     off_t            offset) noexcept
{
    enum Error
    {
        EACCES    = EACCES,
        EAGAIN    = EAGAIN,
        EBADF     = EBADF,
        EINVAL    = EINVAL,
        ENFILE    = ENFILE,
        ENODEV    = ENODEV,
        ENOMEM    = ENOMEM,
        EOVERFLOW = EOVERFLOW,
        EPERM     = EPERM,
        ETXTBSY   = ETXTBSY,
    };

    return Result<void*, Error>(_c_syscall6(SYS_mmap, addr, length, prot, flags, fd, offset));
}

} // namespace linux

#endif
