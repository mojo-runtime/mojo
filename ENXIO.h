#ifndef c_ENXIO_h_
#define c_ENXIO_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENXIO =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
