#ifndef c_sighandler_t_h_
#define c_sighandler_t_h_

#include "c/SignalNumber.h"

__c_namespace_open

typedef void (*sighandler_t)(SignalNumber);

__c_namespace_close

#endif
