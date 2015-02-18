#ifndef c_AT_FLAGS_h_
#define c_AT_FLAGS_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_FLAGS =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif
