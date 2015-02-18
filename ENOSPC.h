#ifndef c_ENOSPC_h_
#define c_ENOSPC_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOSPC =
#ifdef __linux__
 28
#else
#  error
#endif
 ;

__c_namespace_close

#endif
