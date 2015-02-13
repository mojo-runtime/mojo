#ifndef c_SIGINT_h_
#define c_SIGINT_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGINT =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
