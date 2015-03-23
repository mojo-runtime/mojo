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
#else
#  error
#endif

#pragma clang diagnostic pop
