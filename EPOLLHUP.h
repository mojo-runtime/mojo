#ifndef c_EPOLLHUP_h_
#define c_EPOLLHUP_h_

#include "c/POLLHUP.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPOLLHUP =
#ifdef __linux__
 POLLHUP
#else
#  error
#endif
 ;

__c_namespace_close

#endif
