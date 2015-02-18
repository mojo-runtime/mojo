#ifndef c_CLD_CONTINUED_h_
#define c_CLD_CONTINUED_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
CLD_CONTINUED =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
