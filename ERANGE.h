#ifndef c_ERANGE_h_
#define c_ERANGE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ERANGE =
#ifdef __linux__
 34
#else
#  error
#endif
 ;

__c_namespace_close

#endif
