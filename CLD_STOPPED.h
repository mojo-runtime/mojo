#ifndef c_CLD_STOPPED_h_
#define c_CLD_STOPPED_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
CLD_STOPPED =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
