#ifndef c_EPOLLPRI_h_
#define c_EPOLLPRI_h_

#include "c/POLLPRI.h"
#include "c/EpollEvents.h"

__c_namespace_open

static
const EpollEvents
EPOLLPRI =
#ifdef __linux__
 POLLPRI
#else
#  error
#endif
 ;

__c_namespace_close

#endif
