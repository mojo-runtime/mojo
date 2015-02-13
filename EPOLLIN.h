#ifndef c_EPOLLIN_h_
#define c_EPOLLIN_h_

#include "c/POLLIN.h"
#include "c/EpollEvents.h"

__c_namespace_open

static
const EpollEvents
EPOLLIN =
#ifdef __linux__
 POLLIN
#else
#  error
#endif
 ;

__c_namespace_close

#endif
