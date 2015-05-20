#pragma once

#include "size_t.h"

#if defined(__has_builtin)
#  define __has_builtin_memset __has_builtin(__builtin_memset)
#elif defined(__GNUC__)
#  define __has_builtin_memset 1 // Version?
#else
#  error
#endif

static inline
void*
memset(void* s, int c, size_t n)
{
#if __has_builtin_memset
    return __builtin_memset(s, c, n);
#else
#  error
#endif
}
