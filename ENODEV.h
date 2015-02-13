#ifndef c_ENODEV_h_
#define c_ENODEV_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENODEV =
#ifdef __linux__
 19
#else
#  error
#endif
 ;

__c_namespace_close

#endif
