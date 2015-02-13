#ifndef c_EDOM_h_
#define c_EDOM_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EDOM =
#ifdef __linux__
 33
#else
#  error
#endif
 ;

__c_namespace_close

#endif
