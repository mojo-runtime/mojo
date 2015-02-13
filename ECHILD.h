#ifndef c_ECHILD_h_
#define c_ECHILD_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ECHILD =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

__c_namespace_close

#endif
