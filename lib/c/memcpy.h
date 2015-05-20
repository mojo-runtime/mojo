#pragma once

#include "size_t.h"

#if defined(__has_builtin)
#  define __has_builtin_memcpy __has_builtin(__builtin_memcpy)
#elif defined(__GNUC__)
#  define __has_builtin_memcpy 1 // Version?
#else
#  error
#endif

static inline
void*
memcpy(void* dest, const void* src, size_t n)
{
#if __has_builtin_memcpy
    return __builtin_memcpy(dest, src, n);
#else
#  error
#endif
}
