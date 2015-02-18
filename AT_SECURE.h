#ifndef c_AT_SECURE_h_
#define c_AT_SECURE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_SECURE =
#ifdef __linux__
 23
#else
#  error
#endif
 ;

__c_namespace_close

#endif
