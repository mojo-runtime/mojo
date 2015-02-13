#ifndef c_POLLIN_h_
#define c_POLLIN_h_

#include "c/PollEvents.h"

__c_namespace_open

static
const PollEvents
POLLIN =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
