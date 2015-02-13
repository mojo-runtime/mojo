#ifndef c_EMLINK_h_
#define c_EMLINK_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
__c_namespace_open
#endif

static
const ErrorNumber
EMLINK =
#ifdef __linux__
 31
#else
#  error
#endif
 ;

#ifdef __cplusplus
__c_namespace_close
#endif

#endif
