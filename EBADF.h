#ifndef c_EBADF_h_
#define c_EBADF_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EBADF =
#ifdef __linux__
 9
#else
#  error
#endif
 ;

__c_namespace_close

#endif
