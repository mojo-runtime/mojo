#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__)
#  define __Result_ok(Ok, word)                                 \
    _Pragma("clang diagnostic push")                            \
    _Pragma("clang diagnostic ignored \"-Wold-style-cast\"")    \
    ((Ok)(word))                                                \
    _Pragma("clang diagnostic pop")
#else
#  error
#endif

#pragma clang diagnostic pop
