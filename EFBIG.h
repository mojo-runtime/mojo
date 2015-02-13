#ifndef c_EFBIG_h_
#define c_EFBIG_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EFBIG =
#ifdef __linux__
 27
#else
#  error
#endif
 ;

__c_namespace_close

#endif
