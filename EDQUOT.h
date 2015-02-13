#ifndef c_EDQUOT_h_
#define c_EDQUOT_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EDQUOT =
#ifdef __linux__
 #  ifdef __x86_64__
 122 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
