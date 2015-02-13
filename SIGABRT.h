#ifndef c_SIGABRT_h_
#define c_SIGABRT_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGABRT =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
