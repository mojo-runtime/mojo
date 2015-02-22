#ifndef x_syscall0
#  if defined(__linux__) && defined(__x86_64__)
     // FIXME: temporary _Pragma(...)
#    pragma clang diagnostic ignored "-Wgnu-statement-expression"
#    define x_syscall0(number)                                          \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        __asm__ __volatile__ ("syscall"                                 \
                              : "=a" (result)                           \
                              : "0" (number)                            \
                              : "rcx", "r11");                          \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
