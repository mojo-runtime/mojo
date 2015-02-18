#ifndef c_TCGETS_h_
#define c_TCGETS_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
TCGETS =
#ifdef __linux__
 0x5401
#else
#  error
#endif
 ;

__c_namespace_close

#endif
