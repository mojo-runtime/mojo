#ifndef c_ENOEXEC_h_
#define c_ENOEXEC_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOEXEC =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif
