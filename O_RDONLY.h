#ifndef c_O_RDONLY_h_
#define c_O_RDONLY_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
O_RDONLY =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

__c_namespace_close

#endif
