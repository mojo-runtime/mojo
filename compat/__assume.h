#pragma once

#include "__has_builtin.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__assume) && __has_builtin(__builtin_assume)
#  define __assume(x) __builtin_assume(x)
#endif

#if !defined(__assume)
#  define __assume(x)
#endif

#pragma clang diagnostic pop
