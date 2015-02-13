#ifndef c_SIGILL_h_
#define c_SIGILL_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGILL =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
