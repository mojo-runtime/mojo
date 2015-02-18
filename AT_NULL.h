#ifndef c_AT_NULL_h_
#define c_AT_NULL_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_NULL =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

__c_namespace_close

#endif
