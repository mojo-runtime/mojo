#ifndef c_abs_h_
#define c_abs_h_

#include "c/__c_constexpr.h"

#ifdef __cplusplus
inline namespace c {
#endif

static __c_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
