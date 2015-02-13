#ifndef c_EROFS_h_
#define c_EROFS_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EROFS =
#ifdef __linux__
 30
#else
#  error
#endif
 ;

__c_namespace_close

#endif
