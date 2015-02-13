#ifndef c_EPERM_h_
#define c_EPERM_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EPERM =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
