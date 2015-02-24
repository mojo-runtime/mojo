#ifndef x_syscall1
#  include "x/decltype.h"
#  if defined(__linux__) && defined(__x86_64__)
     // FIXME: temporary _Pragma(...)
#    pragma clang diagnostic ignored "-Wgnu-statement-expression"
#    define x_syscall1(number, a1)                                      \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        register x_decltype(a1) r1 __asm__ ("rdi") = a1;                \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number), "r" (r1)                  \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
