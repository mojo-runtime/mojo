#ifndef c_E2BIG_h_
#define c_E2BIG_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
E2BIG =
#ifdef __linux__
 7
#else
#  error todo
#endif
 ;

__c_namespace_close

#endif
