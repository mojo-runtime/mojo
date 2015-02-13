#ifndef c_EPOLL_CTL_ADD_h_
#define c_EPOLL_CTL_ADD_h_

#include "c/EpollControlKind.h"

__c_namespace_open

static
const EpollControlKind
EPOLL_CTL_ADD =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
