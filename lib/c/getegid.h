#pragma once

#include "SYS_getegid.h"
#include "gid_t.h"
#include "config/__syscall.h"

static inline
gid_t
getegid()
{
    register
    gid_t
    r0 __asm__ (__syscall_R0) = SYS_getegid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
