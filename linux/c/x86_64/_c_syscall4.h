#ifndef _c_syscall4
#pragma clang diagnostic ignored "-Wgnu-statement-expression"
#define _c_syscall4(number, a1, a2, a3, a4)                             \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register __typeof__(a1) r1 __asm__ ("rdi") = a1;                \
        register __typeof__(a2) r2 __asm__ ("rsi") = a2;                \
        register __typeof__(a3) r3 __asm__ ("rdx") = a3;                \
        register __typeof__(a4) r4 __asm__ ("r10") = a4;                \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number), "r" (r1), "r" (r2), "r" (r3), "r" (r4)      \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#endif
