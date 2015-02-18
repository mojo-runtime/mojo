#ifndef c_ECHILD_h_
#define c_ECHILD_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ECHILD =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

__c_namespace_close

#endif
