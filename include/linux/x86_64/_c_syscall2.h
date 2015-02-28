#ifndef _c_syscall2
#pragma clang diagnostic ignored "-Wgnu-statement-expression"
#define _c_syscall2(number, a1, a2)                                     \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number), "D" (a1), "S" (a2)                          \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#endif
