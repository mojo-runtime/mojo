#ifndef _c_syscall0
#  pragma clang diagnostic ignored "-Wgnu-statement-expression"
#  if defined (__linux__) && defined (__x86_64__)
#    define _c_syscall0(number)                                         \
    ({                                                                  \
        unsigned long result;                                           \
                                                                        \
        __asm__ __volatile__ (                                          \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (number)                                              \
            : "rcx", "r11");                                            \
                                                                        \
        result;                                                         \
    })
#  else
#    error
#  endif
#endif
