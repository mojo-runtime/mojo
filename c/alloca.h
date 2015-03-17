#pragma once

#include "compat/__has_builtin.h"
#include "compat/__nothrow.h"
#include "size_t.h"

__nothrow
static inline
void*
alloca(size_t size)
{
#if __has_builtin(__builtin_alloca)
    return __builtin_alloca(size);
#else
#  error
#endif
}
