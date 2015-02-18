#ifndef c_POLLHUP_h_
#define c_POLLHUP_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
POLLHUP =
#ifdef __linux__
 0x10
#else
#  error
#endif
 ;

__c_namespace_close

#endif
