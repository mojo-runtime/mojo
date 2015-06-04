#pragma once

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
#include "c/off_t.h"
#include "c/size_t.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_mmap 90
#elif defined(__x86_64__)
#  define __NR_mmap 9
#else
#  error
#endif

namespace os { inline namespace linux {

static inline
auto
mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(AGAIN),
        _E(BADF),
        _E(INVAL),
        _E(NFILE),
        _E(NODEV),
        _E(NOMEM),
        _E(OVERFLOW),
        _E(PERM),
        _E(TXTBSY),
    };

    return Result<void*, Error>(__NR_mmap, addr, length, prot, flags, fd, offset);
}

}}
