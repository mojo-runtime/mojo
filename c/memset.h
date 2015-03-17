#pragma once

#include "compat/__has_builtin.h"
#include "compat/__nothrow.h"
#include "size_t.h"

__nothrow
static inline
void*
memset(void* s, int c, size_t n)
{
#if __has_builtin(__builtin_memset)
    return __builtin_memset(s, c, n);
#else
#  error
#endif
}
