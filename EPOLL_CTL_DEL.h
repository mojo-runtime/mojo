#ifndef c_EPOLL_CTL_DEL_h_
#define c_EPOLL_CTL_DEL_h_

#include "c/EpollControlKind.h"

__c_namespace_open

static
const EpollControlKind
EPOLL_CTL_DEL =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
