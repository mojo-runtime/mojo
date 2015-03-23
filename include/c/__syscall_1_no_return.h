#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__x86_64__)
#  define __syscall_1_no_return(n, a1)                      \
    do {                                                    \
        __asm__ __volatile__ (                              \
            "syscall"                                       \
            :                                               \
            : "a" (n), "D" (a1)                             \
        );                                                  \
                                                            \
        __builtin_unreachable();                            \
    } while (0)
#elif defined(__arm__) && !defined(__thumb__)
#  define __syscall_1_no_return(n, a1)                      \
    do {                                                    \
        register __typeof__(n)  r0 __asm__("r0") = n;       \
        register __typeof__(a1) r1 __asm__("r1") = a1;      \
                                                            \
        __asm__ __volatile__ (                              \
            "swi 0x0"                                       \
            :                                               \
            : "r" (r0), "r" (r1)                            \
        );                                                  \
                                                            \
        __builtin_unreachable();                            \
    } while (0)
#else
#  error
#endif

#pragma clang diagnostic pop
