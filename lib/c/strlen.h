#pragma once

#include "size_t.h"

static inline
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
