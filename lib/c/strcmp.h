#pragma once

#include "config/__has_builtin_strcmp.h"

static inline
int
strcmp(const char* s1, const char* s2)
{
#if __has_builtin_strcmp
    return __builtin_strcmp(s1, s2);
#else
#  error
#endif
}
