#ifndef c_SIGABRT_h_
#define c_SIGABRT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGABRT =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
