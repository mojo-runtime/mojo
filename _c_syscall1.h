#ifndef _c_syscall1
#  include "c/decltype.h"
#  include "c/SystemCallResult.h"
#  if defined(__linux__) && defined(__x86_64__)
#    define _c_syscall1(number, a1)                                     \
    _Pragma("clang diagnostic push")                                    \
    _Pragma("clang diagnostic ignored \"-Wgnu-statement-expression\"")  \
    ({                                                                  \
        SystemCallResult result;                                        \
                                                                        \
        register decltype(a1) r1 __asm__ ("rdi") = a1;                  \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number), "r" (r1)                  \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })                                                                  \
    _Pragma("clang diagnostic pop")
#  else
#    error
#  endif
#endif
