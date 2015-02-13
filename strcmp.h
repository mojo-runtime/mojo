#ifndef c_strcmp_h_
#define c_strcmp_h_

#include "c/__c_constexpr.h"

#ifdef __cplusplus
inline namespace c {
#endif

static __c_constexpr
int
strcmp(const char* x, const char* y)
{
    // Very simple implementation

    for (;; ++x, ++y) {
        char x_byte = *x;
        char y_byte = *y;

        if (x_byte == '\0')
            return y_byte == '\0' ? 0 : 1;

        if (y_byte == '\0')
            return -1;

        if (x_byte != y_byte)
            return x_byte < y_byte ? -1 : 1;
    }
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
