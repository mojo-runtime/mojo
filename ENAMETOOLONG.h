#ifndef c_ENAMETOOLONG_h_
#define c_ENAMETOOLONG_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENAMETOOLONG =
#ifdef __linux__
#  ifdef __x86_64__
 36 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
