#ifndef c_POLLOUT_h_
#define c_POLLOUT_h_

#include "c/PollEvents.h"

__c_namespace_open

static
const PollEvents
POLLOUT =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
