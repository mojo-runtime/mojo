#ifndef c_POLLPRI_h_
#define c_POLLPRI_h_

#include "c/PollEvents.h"

__c_namespace_open

static
const PollEvents
POLLPRI =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
