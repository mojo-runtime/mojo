#ifndef c_EFAULT_h_
#define c_EFAULT_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EFAULT =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

__c_namespace_close

#endif
