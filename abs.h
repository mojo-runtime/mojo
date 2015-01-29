#ifndef _c__abs_h
#define _c__abs_h

#include "c/compatibility/_CONSTEXPR.h"

#ifdef __cplusplus
inline namespace c {
#endif

static _CONSTEXPR
int
abs(int x)
{
    return x < 0 ? -x : x;
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
