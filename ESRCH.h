#ifndef c_ESRCH_h_
#define c_ESRCH_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ESRCH =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

__c_namespace_close

#endif
