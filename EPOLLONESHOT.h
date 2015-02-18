#ifndef c_EPOLLONESHOT_h_
#define c_EPOLLONESHOT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPOLLONESHOT =
#ifdef __linux__
 (1 << 30)
#else
#  error
#endif
 ;

__c_namespace_close

#endif
