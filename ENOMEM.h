#ifndef c_ENOMEM_h_
#define c_ENOMEM_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOMEM =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

__c_namespace_close

#endif
