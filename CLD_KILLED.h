#ifndef c_CLD_KILLED_h_
#define c_CLD_KILLED_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
CLD_KILLED =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
