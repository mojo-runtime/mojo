#ifndef _c_syscall3
#pragma clang diagnostic ignored "-Wgnu-statement-expression"
#define _c_syscall3(number, a1, a2, a3)                                 \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register __typeof__(a3) r3 __asm__ ("rdx") = a3;                \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number), "D" (a1), "S" (a2), "r" (r3)                \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#endif
