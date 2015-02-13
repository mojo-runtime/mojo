#ifndef c_CLD_STOPPED_h_
#define c_CLD_STOPPED_h_

#include "c/ChildStatus.h"

__c_namespace_open

static
const ChildStatus
CLD_STOPPED =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
