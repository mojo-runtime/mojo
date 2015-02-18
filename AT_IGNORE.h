#ifndef c_AT_IGNORE_h_
#define c_AT_IGNORE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_IGNORE =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
