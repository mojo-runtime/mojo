#pragma once

#include "size_t.h"
#include "compat/__constexpr.h"

static __constexpr
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
