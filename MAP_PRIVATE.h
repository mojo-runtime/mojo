#ifndef c_MAP_PRIVATE_h_
#define c_MAP_PRIVATE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
MAP_PRIVATE =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
