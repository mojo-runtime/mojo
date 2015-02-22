#ifndef c_abs_h_
#define c_abs_h_

#include "extension/x_constexpr.h"
#include "_internal/_c_namespace.h"

_c_namespace

static x_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

_c_namespace_end

#endif
