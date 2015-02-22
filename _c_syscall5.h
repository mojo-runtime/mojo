#ifndef _c_syscall5
#  include "x/x_decltype.h"
#  if defined(__linux__) && defined(__x86_64__)
     // FIXME: temporary _Pragma(...)
#    pragma clang diagnostic ignored "-Wgnu-statement-expression"
#    define _c_syscall5(number, a1, a2, a3, a4, a5)                     \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register x_decltype(a1) r1 __asm__ ("rdi") = a1;                \
        register x_decltype(a2) r2 __asm__ ("rsi") = a2;                \
        register x_decltype(a3) r3 __asm__ ("rdx") = a3;                \
        register x_decltype(a4) r4 __asm__ ("r10") = a4;                \
        register x_decltype(a5) r5 __asm__ ("r8")  = a5;                \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5) \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
