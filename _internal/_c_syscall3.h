#ifndef _c_syscall3
#  pragma clang diagnostic ignored "-Wgnu-statement-expression"
#  if defined (__linux__) && defined (__x86_64__)
#    define _c_syscall3(number, a1, a2, a3)                             \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register __typeof__(a1) r1 __asm__ ("rdi") = a1;                \
        register __typeof__(a2) r2 __asm__ ("rsi") = a2;                \
        register __typeof__(a3) r3 __asm__ ("rdx") = a3;                \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number), "r" (r1), "r" (r2), "r" (r3)                \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
