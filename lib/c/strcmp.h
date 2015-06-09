#pragma once

#include <feature/_HAS_BUILTIN_STRCMP.h>

static inline
int
strcmp(const char* s1, const char* s2)
{
#if _HAS_BUILTIN_STRCMP
    return __builtin_strcmp(s1, s2);
#else
#  error
#endif
}
