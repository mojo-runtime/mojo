#ifndef c_AT_PHENT_h_
#define c_AT_PHENT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_PHENT =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
