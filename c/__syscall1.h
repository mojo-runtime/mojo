#pragma once

#include "compat/__Word.h"
#include "compat/__typeof.h"

#pragma clang diagnostic ignored "-Wgnu-statement-expression" // FIXME

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__) && defined(__x86_64__)
#  define __syscall1(n, a1)                                             \
    ({                                                                  \
        __Word                                                          \
        result;                                                         \
                                                                        \
        register __typeof(a1) r1 __asm__ ("rdi") = a1;                  \
                                                                        \
        __asm__ volatile (                                              \
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
