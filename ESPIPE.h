#ifndef c_ESPIPE_h_
#define c_ESPIPE_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ESPIPE =
#ifdef __linux__
 29
#else
#  error
#endif
 ;

__c_namespace_close

#endif
