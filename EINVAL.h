#ifndef c_EINVAL_h_
#define c_EINVAL_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EINVAL =
#ifdef __linux__
 22
#else
#  error
#endif
 ;

__c_namespace_close

#endif
