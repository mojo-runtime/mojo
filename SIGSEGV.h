#ifndef c_SIGSEGV_h_
#define c_SIGSEGV_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGSEGV =
#ifdef __linux__
 11
#else
#  error
#endif
 ;

__c_namespace_close

#endif
