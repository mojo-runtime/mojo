#ifndef c_SIGHUP_h_
#define c_SIGHUP_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGHUP =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
