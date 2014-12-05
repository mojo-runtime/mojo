#ifndef _c__strcmp_h
#define _c__strcmp_h

#include "c/__internal/__c_CONSTEXPR.h"

#ifdef __cplusplus
inline namespace c {
#endif

static __c_CONSTEXPR
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
