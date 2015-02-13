#ifndef c_SIGALRM_h_
#define c_SIGALRM_h_

#include "c/SignalNumber.h"

__c_namespace_open

static
const SignalNumber
SIGALRM =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

__c_namespace_close

#endif
