#ifndef c_strlen_h_
#define c_strlen_h_

#include "c/constexpr.h"
#include "c/size_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

static constexpr
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

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
