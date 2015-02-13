#ifndef c_EPOLLWAKEUP_h_
#define c_EPOLLWAKEUP_h_

#include "c/EpollEvents.h"

__c_namespace_open

static
const EpollEvents
EPOLLWAKEUP =
#ifdef __linux__
 (1 << 29)
#else
#  error
#endif
 ;

__c_namespace_close

#endif
