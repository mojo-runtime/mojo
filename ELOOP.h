#ifndef c_ELOOP_h_
#define c_ELOOP_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ELOOP =
#ifdef __linux__
#  ifdef __x86_64__
 40 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
