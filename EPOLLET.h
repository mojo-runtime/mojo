#ifndef c_EPOLLET_h_
#define c_EPOLLET_h_

#include "c/EpollEvents.h"
#include "c/_c_static_cast.h"

__c_namespace_open

static
const EpollEvents
EPOLLET =
#ifdef __linux__
// 0x80000000
 _c_static_cast(EpollEvents, (1u << 31))
#else
#  error
#endif
 ;

__c_namespace_close

#endif
