#ifndef c_EINTR_h_
#define c_EINTR_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EINTR =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
