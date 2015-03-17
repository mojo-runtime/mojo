#pragma once

#include "compat/__has_builtin.h"
#include "compat/__nothrow.h"
#include "size_t.h"

__nothrow
static inline
void*
memcpy(void* dest, const void* src, size_t n)
{
#if __has_builtin(__builtin_memcpy)
    return __builtin_memcpy(dest, src, n);
#else
#  error
#endif
}
