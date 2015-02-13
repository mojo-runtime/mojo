#ifndef c_CLD_KILLED_h_
#define c_CLD_KILLED_h_

#include "c/ChildStatus.h"

__c_namespace_open

static
const ChildStatus
CLD_KILLED =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
