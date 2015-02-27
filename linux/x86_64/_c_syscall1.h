#ifndef _c_syscall1
#pragma clang diagnostic ignored "-Wgnu-statement-expression"
#define _c_syscall1(number, a1)                                         \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number), "D" (a1)                                    \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#endif
