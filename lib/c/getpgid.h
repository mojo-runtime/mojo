#pragma once

#include "SYS_getpgid.h"
#include "pid_t.h"
#include "config/__syscall.h"

static inline
pid_t
getpgid()
{
    register
    pid_t
    r0 __asm__ (__syscall_R0) = SYS_getpgid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
