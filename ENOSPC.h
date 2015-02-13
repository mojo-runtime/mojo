#ifndef c_ENOSPC_h_
#define c_ENOSPC_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOSPC =
#ifdef __linux__
 28
#else
#  error
#endif
 ;

__c_namespace_close

#endif
