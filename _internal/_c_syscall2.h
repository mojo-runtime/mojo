#ifndef _c_syscall2
#  pragma clang diagnostic ignored "-Wgnu-statement-expression"
#  if defined (__linux__) && defined (__x86_64__)
#    define _c_syscall2(number, a1, a2)                                 \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register __typeof__(a1) r1 __asm__ ("rdi") = a1;                \
        register __typeof__(a2) r2 __asm__ ("rsi") = a2;                \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number), "r" (r1), "r" (r2)                          \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
