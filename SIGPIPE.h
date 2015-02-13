#ifndef c_SIGPIPE_h_
#define c_SIGPIPE_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGPIPE =
#ifdef __linux__
 13
#else
#  error
#endif
 ;

__c_namespace_close

#endif
