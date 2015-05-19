#pragma once

#include "SYS_gettid.h"
#include "pid_t.h"
#include "__syscall.h"

static inline
pid_t
gettid()
{
    register
    pid_t
    r0 __asm__ (__syscall_R0) = SYS_gettid;

    __asm__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r)
        : __syscall_CLOBBERS
    );

    return r0;
}
