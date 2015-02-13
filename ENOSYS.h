#ifndef c_ENOSYS_h_
#define c_ENOSYS_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOSYS =
#ifdef __linux__
#  ifdef __x86_64__
 38 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
