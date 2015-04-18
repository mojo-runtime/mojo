#pragma once

#include "abi/__syscall.h"
#include "SYS_getpid.h"
#include "pid_t.h"

static inline
pid_t
getpid()
{
    register
    pid_t
    r0 __asm__ (__syscall_R0) = SYS_getpid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
