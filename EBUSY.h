#ifndef c_EBUSY_h_
#define c_EBUSY_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EBUSY =
#ifdef __linux__
 16
#else
#  error
#endif
 ;

__c_namespace_close

#endif
