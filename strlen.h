#ifndef c_strlen_h_
#define c_strlen_h_

#include "has/builtin/strlen.h"
#include "size_t.h"

static
size_t
strlen(const char* data)
{
#if has_builtin_strlen
    return __builtin_strlen(data);
#else
#  error
#endif
}

#endif
