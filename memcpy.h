#ifndef c_memcpy_h_
#define c_memcpy_h_

#include "compiler/has/builtin/memcpy.h"
#include "size_t.h"

static
void*
memcpy(void* target, const void* source, size_t bytes)
{
#if compiler_has_builtin_memcpy
    return __builtin_memcpy(target, source, bytes);
#else
#  error
#endif
}

#endif
