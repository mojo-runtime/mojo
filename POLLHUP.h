#ifndef c_POLLHUP_h_
#define c_POLLHUP_h_

#include "c/PollEvents.h"

__c_namespace_open

static
const PollEvents
POLLHUP =
#ifdef __linux__
 0x10
#else
#  error
#endif
 ;

__c_namespace_close

#endif
