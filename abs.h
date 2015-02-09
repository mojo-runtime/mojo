#ifndef c_abs_h_
#define c_abs_h_

#include "c/_CONSTEXPR.h"

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
