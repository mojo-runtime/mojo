#pragma once

#include "size_t.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  define __has_builtin_memcmp __has_builtin(__builtin_memcmp)
#elif defined(__GNUC__)
#  define __has_builtin_memcmp 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop

static inline
int
memcmp(const void* s1, const void* s2, size_t n)
{
#if __has_builtin_memcmp
    return __builtin_memcmp(s1, s2, n);
#else
#  error
#endif
}
