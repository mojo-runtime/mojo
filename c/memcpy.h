#pragma once

#include "size_t.h"
#include "__nothrow.h"

__nothrow
static inline
void*
memcpy(void* dest, const void* src, size_t n)
{
#if defined(__has_builtin)
#  if __has_builtin(__builtin_memcpy)
    return __builtin_memcpy(dest, src, n);
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
    return __builtin_memcpy(dest, src, n);
#else
#  error
#endif
}
