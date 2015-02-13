#ifndef c_CLD_CONTINUED_h_
#define c_CLD_CONTINUED_h_

#include "c/ChildStatus.h"

__c_namespace_open

static
const ChildStatus
CLD_CONTINUED =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
