#ifndef c_EPOLLONESHOT_h_
#define c_EPOLLONESHOT_h_

#include "c/EpollEvents.h"

__c_namespace_open

static
const EpollEvents
EPOLLONESHOT =
#ifdef __linux__
 (1 << 30)
#else
#  error
#endif
 ;

__c_namespace_close

#endif
