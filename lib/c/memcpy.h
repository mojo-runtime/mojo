#pragma once

#include "config/__has_builtin_memcpy.h"
#include "size_t.h"

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
