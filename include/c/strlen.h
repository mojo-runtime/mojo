#pragma once

#include "size_t.h"

static
#if defined(__cplusplus)
constexpr
#else
inline
#endif
size_t
strlen(const char* s)
{
    size_t
    result = 0;

    while (*s != 0) {
        ++result;
        ++s;
    }

    return result;
}
