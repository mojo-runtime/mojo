#pragma once

#include "config/__has_builtin_memcmp.h"
#include "size_t.h"

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
