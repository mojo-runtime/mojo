#ifndef c_P_ALL_h_
#define c_P_ALL_h_

#include "c/idtype_t.h"

__c_namespace_open

static
const idtype_t
P_ALL =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

__c_namespace_close

#endif
