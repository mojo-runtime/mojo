#ifndef _c_syscall0
#  include "c/SystemCallResult.h"
#  if defined(__linux__) && defined(__x86_64__)
#    define _c_syscall0(number)                                         \
    _Pragma("clang diagnostic push")                                    \
    _Pragma("clang diagnostic ignored \"-Wgnu-statement-expression\"")  \
    ({                                                                  \
        SystemCallResult result;                                        \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number)                            \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })                                                                  \
    _Pragma("clang diagnostic pop")
#  else
#    error
#  endif
#endif
