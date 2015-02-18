#ifndef c_CLD_TRAPPED_h_
#define c_CLD_TRAPPED_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
CLD_TRAPPED =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
