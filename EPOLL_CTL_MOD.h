#ifndef c_EPOLL_CTL_MOD_h_
#define c_EPOLL_CTL_MOD_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPOLL_CTL_MOD =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

__c_namespace_close

#endif
