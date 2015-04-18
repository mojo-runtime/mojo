#pragma once

#include "__Result.h"
#include "__noexcept.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc99-extensions"
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__)
#  if defined(__x86_64__)
#    define __syscall_CLOBBERS "rcx", "r11"
#    define __syscall_R0 "rax"
#    define __syscall_R1 "rdi"
#    define __syscall_R2 "rsi"
#    define __syscall_R3 "rdx"
#    define __syscall_R4 "r10"
#    define __syscall_R5 "r8"
#    define __syscall_R6 "r9"
#    define __syscall_TRAP "syscall"
#  elif defined(__arm__) && !defined(__thumb__)
#    define __syscall_CLOBBERS "memory"
#    define __syscall_R0 "r0"
#    define __syscall_R1 "r1"
#    define __syscall_R2 "r2"
#    define __syscall_R3 "r3"
#    define __syscall_R4 "r4"
#    define __syscall_R5 "r5"
#    define __syscall_R6 "r6"
#    define __syscall_TRAP "swi 0x0"
#  else
#    error
#  endif
#  define __syscall_SBB
#  define __syscall_SBB_OUTPUT
#  define __syscall_SBB_SETUP
#  define __syscall_SBB_VALUE
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    define __syscall_TRAP "syscall"
#    define __syscall_OUTPUTS "=r" (r0), "=r" (sbb_result)
#    define __syscall_CLOBBERS "memory"
#    define __syscall_R0 "rax"
#    define __syscall_R1 "rdi"
#    define __syscall_R2 "rsi"
#    define __syscall_R3 "rdx"
#    define __syscall_R4 "rcx"
#    define __syscall_R5 "r8"
#    define __syscall_R6 "r9"
#    define __syscall_SBB "\nsbb %1, %1"
#    define __syscall_SBB_OUTPUT , "=r" (sbb_result)
#    define __syscall_SBB_SETUP __Word sbb_result;
#    define __syscall_SBB_VALUE , (sbb_result != 0)
#  else
#    error
#  endif
#else
#  error
#endif

static inline
__Result
__syscall_0(__Word n) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

static inline
__Result
__syscall_1(__Word n, __Word a1) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;
    register __Word r1 __asm__ (__syscall_R1) = a1;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0), "r" (r1)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

static inline
__Result
__syscall_2(__Word n, __Word a1, __Word a2) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;
    register __Word r1 __asm__ (__syscall_R1) = a1;
    register __Word r2 __asm__ (__syscall_R2) = a2;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0), "r" (r1), "r" (r2)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

static inline
__Result
__syscall_3(__Word n, __Word a1, __Word a2, __Word a3) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;
    register __Word r1 __asm__ (__syscall_R1) = a1;
    register __Word r2 __asm__ (__syscall_R2) = a2;
    register __Word r3 __asm__ (__syscall_R3) = a3;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0), "r" (r1), "r" (r2), "r" (r3)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

static inline
__Result
__syscall_4(__Word n, __Word a1, __Word a2, __Word a3, __Word a4) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;
    register __Word r1 __asm__ (__syscall_R1) = a1;
    register __Word r2 __asm__ (__syscall_R2) = a2;
    register __Word r3 __asm__ (__syscall_R3) = a3;
    register __Word r4 __asm__ (__syscall_R4) = a4;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0), "r" (r1), "r" (r2), "r" (r3), "r" (r4)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

static inline
__Result
__syscall_5(__Word n, __Word a1, __Word a2, __Word a3, __Word a4, __Word a5) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;
    register __Word r1 __asm__ (__syscall_R1) = a1;
    register __Word r2 __asm__ (__syscall_R2) = a2;
    register __Word r3 __asm__ (__syscall_R3) = a3;
    register __Word r4 __asm__ (__syscall_R4) = a4;
    register __Word r5 __asm__ (__syscall_R5) = a5;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

static inline
__Result
__syscall_6(__Word n, __Word a1, __Word a2, __Word a3, __Word a4, __Word a5, __Word a6) __noexcept
{
    __syscall_SBB_SETUP

    register __Word r0 __asm__ (__syscall_R0) = n;
    register __Word r1 __asm__ (__syscall_R1) = a1;
    register __Word r2 __asm__ (__syscall_R2) = a2;
    register __Word r3 __asm__ (__syscall_R3) = a3;
    register __Word r4 __asm__ (__syscall_R4) = a4;
    register __Word r5 __asm__ (__syscall_R5) = a5;
    register __Word r6 __asm__ (__syscall_R6) = a6;

    __asm__ __volatile__ (
        __syscall_TRAP
        __syscall_SBB
        : "=r" (r0) __syscall_SBB_OUTPUT
        : "r" (r0), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6)
        : __syscall_CLOBBERS
    );

    return (__Result) { r0 __syscall_SBB_VALUE };
}

#pragma clang diagnostic pop

