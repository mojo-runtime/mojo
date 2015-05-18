#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __cast(T, x)                                                    \
    _Pragma("clang diagnostic push")                                    \
    _Pragma("clang diagnostic ignored \"-Wold-style-cast\"")            \
    ((T)x)                                                              \
    _Pragma("clang diagnostic pop")

#pragma clang diagnostic pop
