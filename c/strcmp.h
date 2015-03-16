#pragma once

#include "compat/__nothrow.h"

__nothrow
static inline
int
strcmp(const char* s1, const char* s2)
{
#if defined(__has_builtin)
#  if __has_builtin(__builtin_strcmp)
    return __builtin_strcmp(s1, s2);
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
    return __builtin_strcmp(s1, s2);
#else
#  error
#endif
}
