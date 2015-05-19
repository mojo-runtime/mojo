#pragma once

#include "size_t.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  define __has_builtin_memcpy __has_builtin(__builtin_memcpy)
#elif defined(__GNUC__)
#  define __has_builtin_memcpy 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop

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
