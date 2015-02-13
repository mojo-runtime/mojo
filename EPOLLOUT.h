#ifndef c_EPOLLOUT_h_
#define c_EPOLLOUT_h_

#include "c/POLLOUT.h"
#include "c/EpollEvents.h"

__c_namespace_open

static
const EpollEvents
EPOLLOUT =
#ifdef __linux__
 POLLOUT
#else
#  error
#endif
 ;

__c_namespace_close

#endif
