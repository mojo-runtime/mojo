#ifndef c_POLLERR_h_
#define c_POLLERR_h_

#include "c/PollEvents.h"

__c_namespace_open

static
const PollEvents
POLLERR =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif
