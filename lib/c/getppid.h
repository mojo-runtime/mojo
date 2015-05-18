#pragma once

#include "SYS_getppid.h"
#include "pid_t.h"
#include "config/__syscall.h"

static inline
pid_t
getppid()
{
    register
    pid_t
    r0 __asm__ (__syscall_R0) = SYS_getppid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
