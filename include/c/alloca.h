#pragma once

#include "size_t.h"

static inline
void*
alloca(size_t size)
{
#if defined(__has_builtin)
#  if __has_builtin(__builtin_alloca)
    return __builtin_alloca(size);
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
    return __builtin_alloca(size);
#else
#  error
#endif
}
