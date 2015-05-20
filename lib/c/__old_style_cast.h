#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  define __old_style_cast(T, x)                                        \
    _Pragma("clang diagnostic push")                                    \
    _Pragma("clang diagnostic ignored \"-Wold-style-cast\"")            \
    ((T)x)                                                              \
    _Pragma("clang diagnostic pop")
#else
#  define __old_style_cast(T, x) ((T)x)
#endif

#pragma clang diagnostic pop
