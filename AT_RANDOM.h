#ifndef c_AT_RANDOM_h_
#define c_AT_RANDOM_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_RANDOM =
#ifdef __linux__
 25
#else
#  error
#endif
 ;

__c_namespace_close

#endif
