#ifndef c_EPOLL_CLOEXEC_h_
#define c_EPOLL_CLOEXEC_h_

#include "c/O_CLOEXEC.h"
#include "c/EpollCreateFlags.h"

__c_namespace_open

static
const EpollCreateFlags
EPOLL_CLOEXEC =
#ifdef __linux__
 O_CLOEXEC
#else
#  error
#endif
 ;

__c_namespace_close

#endif
