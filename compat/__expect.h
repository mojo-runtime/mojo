#pragma once

#include "__has_builtin.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__expect) && __has_builtin(__builtin_expect)
#  define __expect(x, y) __builtin_expect(x, y)
#endif

#if !defined(__expect)
#  define __expect(x, y) (x)
#endif

#pragma clang diagnostic pop
