#ifndef c_TCSETSW_h_
#define c_TCSETSW_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
TCSETSW =
#ifdef __linux__
 0x5403
#else
#  error
#endif
 ;

__c_namespace_close

#endif
