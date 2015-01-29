#ifndef _c__strlen_h
#define _c__strlen_h

#include "c/size_t.h"
#include "c/compatibility/_CONSTEXPR.h"

#ifdef __cplusplus
inline namespace c {
#endif

static _CONSTEXPR
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
