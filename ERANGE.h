#ifndef c_ERANGE_h_
#define c_ERANGE_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ERANGE =
#ifdef __linux__
 34
#else
#  error
#endif
 ;

__c_namespace_close

#endif
