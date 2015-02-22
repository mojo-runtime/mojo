#ifndef c_strlen_h_
#define c_strlen_h_

#include "size_t.h"
#include "extension/x_constexpr.h"

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

#endif
