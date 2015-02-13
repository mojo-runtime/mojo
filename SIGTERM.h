#ifndef c_SIGTERM_h_
#define c_SIGTERM_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGTERM =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

__c_namespace_close

#endif
