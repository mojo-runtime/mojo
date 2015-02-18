#ifndef c_POLLIN_h_
#define c_POLLIN_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
POLLIN =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
