#ifndef c_P_PID_h_
#define c_P_PID_h_

#include "c/idtype_t.h"

__c_namespace_open

static
const idtype_t
P_PID =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
