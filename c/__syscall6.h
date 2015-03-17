#pragma once

#include "compat/__Word.h"
#include "compat/__typeof__.h"

#pragma clang diagnostic ignored "-Wgnu-statement-expression" // FIXME

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__) && defined(__x86_64__)
#  define __syscall6(n, a1, a2, a3, a4, a5, a6)                         \
    ({                                                                  \
        __Word                                                          \
        result;                                                         \
                                                                        \
        register __typeof__(a1) r1 __asm__ ("rdi") = a1;                \
        register __typeof__(a2) r2 __asm__ ("rsi") = a2;                \
        register __typeof__(a3) r3 __asm__ ("rdx") = a3;                \
        register __typeof__(a4) r4 __asm__ ("r10") = a4;                \
        register __typeof__(a5) r5 __asm__ ("r8")  = a5;                \
        register __typeof__(a6) r6 __asm__ ("r9")  = a6;                \
                                                                        \
        __asm__ volatile (                                              \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (n), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6) \
            : "rcx", "r11"                                              \
        );                                                              \
                                                                        \
        result;                                                         \
    })
#else
#  error
#endif

#pragma clang diagnostic pop

