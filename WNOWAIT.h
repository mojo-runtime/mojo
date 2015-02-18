#ifndef c_WNOWAIT_h_
#define c_WNOWAIT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
WNOWAIT =
#ifdef __linux__
 0x1000000
#else
#  error
#endif
 ;

__c_namespace_close

#endif
