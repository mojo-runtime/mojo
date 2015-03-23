#pragma once

#pragma clang diagnostic ignored "-Wgnu-statement-expression"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__x86_64__)
#  define __syscall_3_no_error(Result, n, a1, a2, a3)       \
    ({                                                      \
        Result                                              \
        result;                                             \
                                                            \
        __asm__ __volatile__ (                              \
            "syscall"                                       \
            : "=a" (result)                                 \
            : "0" (n), "D" (a1), "S" (a2), "d" (a3)         \
            : "rcx", "r11"                                  \
        );                                                  \
                                                            \
        result;                                             \
    })
#elif defined(__arm__) && !defined(__thumb__)
#  define __syscall_3_no_error(Result, n, a1, a2, a3)       \
    ({                                                      \
        register Result                                     \
        result __asm__("r0");                               \
                                                            \
        register __typeof__(n)  r0 __asm__("r0") = n;       \
        register __typeof__(a1) r1 __asm__("r1") = a1;      \
        register __typeof__(a2) r2 __asm__("r2") = a2;      \
        register __typeof__(a3) r3 __asm__("r3") = a3;      \
                                                            \
        __asm__ __volatile__ (                              \
            "swi 0x0"                                       \
            : "=r" (result)                                 \
            : "r" (r0), "r" (r1), "r" (r2), "r" (r3)        \
            : "memory"                                      \
        );                                                  \
                                                            \
        result;                                             \
    })
#else
#  error
#endif

#pragma clang diagnostic pop
