#ifndef c_strlen_h_
#define c_strlen_h_

#include "compiler/has/builtin/strlen.h"
#include "size_t.h"

static
size_t
strlen(const char* data)
{
#if compiler_has_builtin_strlen
    return __builtin_strlen(data);
#else
#  error
#endif
}

#endif
