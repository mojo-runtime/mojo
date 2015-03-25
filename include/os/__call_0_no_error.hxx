#pragma once

#include "c/__syscall.h"

namespace os {

template <typename Ok>
static inline
Ok
__call_0_no_error(__Word number) noexcept
{
    register
    Ok
    r_output asm (__syscall_R0);

    register
    __Word
    r_number asm (__syscall_R0) = number;

    asm volatile (
        __syscall_TRAP
        : "=r" (r_output)
        : "r" (r_number)
        : __syscall_CLOBBERS
    );

    return r_output;
}

}
