#ifndef c_abs_h_
#define c_abs_h_

#include "x/constexpr.h"

static x_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

#endif
