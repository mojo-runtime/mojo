#ifndef __syscall0

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__) && defined(__x86_64__)
#  include "__Word.h"
#  define __syscall0(n)                                                 \
  _Pragma("clang diagnostic push")                                      \
  _Pragma("clang diagnostic ignored \"-Wgnu-statement-expression\"")    \
    ({                                                                  \
        __Word                                                          \
        result;                                                         \
                                                                        \
        asm volatile (                                                  \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (n)                                                   \
            : "rcx", "r11"                                              \
        );                                                              \
                                                                        \
        result;                                                         \
    })                                                                  \
  _Pragma("clang diagnostic pop")
#else
#  error
#endif

#pragma clang diagnostic pop

#endif
