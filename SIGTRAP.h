#ifndef c_SIGTRAP_h_
#define c_SIGTRAP_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGTRAP =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
