#pragma once

#include "c/EACCES.h"
#include "c/EBADF.h"
#include "c/EINVAL.h"
#include "c/ENODEV.h"
#include "c/ENOMEM.h"
#include "syscall/SYS_mmap.h"
#include "c/off_t.h"
#include "c/size_t.h"
#include "Result.hxx"

namespace os { inline namespace freebsd {

static inline
auto
mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(BADF),
        _E(INVAL),
        _E(NODEV),
        _E(NOMEM),
    };

    return Result<void*, Error>(SYS_mmap, addr, length, prot, flags, fd, offset);
}

}}
