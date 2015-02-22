#ifndef c_strlen_h_
#define c_strlen_h_

#include "c/size_t.h"
#include "x/x_constexpr.h"

_c_namespace

static x_constexpr
size_t
strlen(const char* data)
{
    size_t
    result = 0;

    while (*data != '\0') {
        result += 1;
        data   += 1;
    }

    return result;
}

_c_namespace_end

#endif
