#ifndef c_abs_h_
#define c_abs_h_

#include "x/x_constexpr.h"
#include "c/_c_namespace.h"

_c_namespace

static x_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

_c_namespace_end

#endif
