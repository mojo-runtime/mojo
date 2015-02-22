#ifndef x_syscall2
#  include "x_decltype.h"
#  if defined(__linux__) && defined(__x86_64__)
     // FIXME: temporary _Pragma(...)
#    pragma clang diagnostic ignored "-Wgnu-statement-expression"
#    define x_syscall2(number, a1, a2)                                  \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register x_decltype(a1) r1 __asm__ ("rdi") = a1;                \
        register x_decltype(a2) r2 __asm__ ("rsi") = a2;                \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number), "r" (r1), "r" (r2)        \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
