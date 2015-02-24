#ifndef c_abs_h_
#define c_abs_h_

#include "_c_constexpr.h"

static _c_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

#endif
