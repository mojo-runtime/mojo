#ifndef c_AT_BASE_h_
#define c_AT_BASE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_BASE =
#ifdef __linux__
 7
#else
#  error
#endif
 ;

__c_namespace_close

#endif
