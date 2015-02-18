#ifndef c_E2BIG_h_
#define c_E2BIG_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
E2BIG =
#ifdef __linux__
 7
#else
#  error todo
#endif
 ;

__c_namespace_close

#endif
