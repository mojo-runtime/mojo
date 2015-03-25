#pragma once

#include "__syscall.h"

static inline
__Word
__syscall_0_no_error(__Word number) __noexcept
{
    register __Word r0 __asm__ (__syscall_R0) = number;

    __asm__ __volatile__ (
        __syscall_TRAP
        : "=r" (r0)
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return r0;
}
