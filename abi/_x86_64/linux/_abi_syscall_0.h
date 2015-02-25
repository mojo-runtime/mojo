#ifndef _abi_syscall_0
#pragma clang diagnostic ignored "-Wgnu-statement-expression"
#define _abi_syscall_0(number)                                          \
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
#endif
