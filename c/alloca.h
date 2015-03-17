#pragma once

#include "compat/__has_builtin.h"
#include "compat/__noexcept.h"
#include "size_t.h"

static inline
void*
alloca(size_t size) __noexcept
{
#if __has_builtin(__builtin_alloca)
    return __builtin_alloca(size);
#else
#  error
#endif
}
