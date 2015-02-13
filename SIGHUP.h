#ifndef c_SIGHUP_h_
#define c_SIGHUP_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGHUP =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
