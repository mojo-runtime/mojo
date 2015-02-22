#ifndef c_abs_h_
#define c_abs_h_

#include "x/x_constexpr.h"
#include "c/__c_namespace.h"

__c_namespace_open

static x_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

__c_namespace_close

#endif
