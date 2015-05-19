#pragma once

#include "SYS_getuid.h"
#include "uid_t.h"
#include "__syscall.h"

static inline
uid_t
getuid()
{
    register
    uid_t
    r0 __asm__ (__syscall_R0) = SYS_getuid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
