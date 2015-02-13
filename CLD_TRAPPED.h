#ifndef c_CLD_TRAPPED_h_
#define c_CLD_TRAPPED_h_

#include "c/ChildStatus.h"

__c_namespace_open

static
const ChildStatus
CLD_TRAPPED =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
