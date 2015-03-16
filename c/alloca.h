#pragma once

#include "config/__has_builtin_alloca.h"
#include "compat/__nothrow.h"
#include "size_t.h"

__nothrow
static inline
void*
alloca(size_t size)
{
#if __has_builtin_alloca
    return __builtin_alloca(size);
#else
#  error
#endif
}
