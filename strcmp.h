#ifndef c_strcmp_h_
#define c_strcmp_h_

#include "compiler/has/builtin/strcmp.h"

static
int
strcmp(const char* x, const char* y)
{
#if compiler_has_builtin_strcmp
    return __builtin_strcmp(x, y);
#else
#  error
#endif
}

#endif
