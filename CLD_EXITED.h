#ifndef c_CLD_EXITED_h_
#define c_CLD_EXITED_h_

#include "c/ChildStatus.h"

__c_namespace_open

static
const ChildStatus
CLD_EXITED =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
