#ifndef c_EDOM_h_
#define c_EDOM_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EDOM =
#ifdef __linux__
 33
#else
#  error
#endif
 ;

__c_namespace_close

#endif
