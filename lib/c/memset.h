#pragma once

#include "config/__has_builtin_memset.h"
#include "size_t.h"

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
