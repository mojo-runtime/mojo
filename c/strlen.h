#pragma once

#include "compat/__has_builtin.h"
#include "compat/__nothrow.h"
#include "size_t.h"

__nothrow
static inline
size_t
strlen(const char* s)
{
#if __has_builtin(__builtin_strlen)
    return __builtin_strlen(s);
#else
#  error
#endif
}
