#ifndef c_SIGKILL_h_
#define c_SIGKILL_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGKILL =
#ifdef __linux__
 9
#else
#  error
#endif
 ;

__c_namespace_close

#endif
