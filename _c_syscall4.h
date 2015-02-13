#ifndef _c_syscall4
#  include "c/decltype.h"
#  include "c/SystemCallResult.h"
#  if defined(__linux__) && defined(__x86_64__)
#    define _c_syscall4(number, a1, a2, a3, a4)                         \
    _Pragma("clang diagnostic push")                                    \
    _Pragma("clang diagnostic ignored \"-Wgnu-statement-expression\"")  \
    ({                                                                  \
        SystemCallResult result;                                        \
                                                                        \
        register decltype(a1) r1 __asm__ ("rdi") = a1;                  \
        register decltype(a2) r2 __asm__ ("rsi") = a2;                  \
        register decltype(a3) r3 __asm__ ("rdx") = a3;                  \
        register decltype(a4) r4 __asm__ ("r10") = a4;                  \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number), "r" (r1), "r" (r2), "r" (r3), "r" (r4) \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })                                                                  \
    _Pragma("clang diagnostic pop")
#  else
#    error
#  endif
#endif
