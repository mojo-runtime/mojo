#ifndef c_CLD_DUMPED_h_
#define c_CLD_DUMPED_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
CLD_DUMPED =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

__c_namespace_close

#endif
