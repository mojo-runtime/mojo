#pragma once

#pragma clang diagnostic ignored "-Wgnu-statement-expression" // FIXME

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__) && defined(__x86_64__)
#  include "compat/__Word.h"
#  define __syscall1(n, a1)                                             \
    ({                                                                  \
        __Word                                                          \
        result;                                                         \
                                                                        \
        register decltype(a1) r1 asm ("rdi") = a1;                      \
                                                                        \
        asm volatile (                                                  \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (n), "r" (r1)                                         \
            : "rcx", "r11"                                              \
        );                                                              \
                                                                        \
        result;                                                         \
    })
#else
#  error
#endif

#pragma clang diagnostic pop
