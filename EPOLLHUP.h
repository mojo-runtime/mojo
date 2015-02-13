#ifndef c_EPOLLHUP_h_
#define c_EPOLLHUP_h_

#include "c/POLLHUP.h"
#include "c/EpollEvents.h"

__c_namespace_open

static
const EpollEvents
EPOLLHUP =
#ifdef __linux__
 POLLHUP
#else
#  error
#endif
 ;

__c_namespace_close

#endif
