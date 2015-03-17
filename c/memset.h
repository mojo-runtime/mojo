#pragma once

#include "compat/__has_builtin.h"
#include "compat/__noexcept.h"
#include "size_t.h"

static inline
void*
memset(void* s, int c, size_t n) __noexcept
{
#if __has_builtin(__builtin_memset)
    return __builtin_memset(s, c, n);
#else
#  error
#endif
}
