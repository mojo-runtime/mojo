#pragma once

#include "SYS_getgid.h"
#include "gid_t.h"
#include "__syscall.h"

static inline
gid_t
getgid()
{
    register
    gid_t
    r0 __asm__ (__syscall_R0) = SYS_getgid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
