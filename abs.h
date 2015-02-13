#ifndef c_abs_h_
#define c_abs_h_

#include "c/__c_constexpr.h"
#include "c/__c_namespace.h"

__c_namespace_open

static __c_constexpr
int
abs(int x)
{
    return x < 0 ? -x : x;
}

__c_namespace_close

#endif
