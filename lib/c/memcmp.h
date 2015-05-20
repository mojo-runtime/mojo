#pragma once

#include "size_t.h"

#if defined(__has_builtin)
#  define __has_builtin_memcmp __has_builtin(__builtin_memcmp)
#elif defined(__GNUC__)
#  define __has_builtin_memcmp 1 // Version?
#else
#  error
#endif

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
