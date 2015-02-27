#ifndef c_strcmp_h_
#define c_strcmp_h_

#include "has/builtin/strcmp.h"

static
int
strcmp(const char* x, const char* y)
{
#if has_builtin_strcmp
    return __builtin_strcmp(x, y);
#else
#  error
#endif
}

#endif
