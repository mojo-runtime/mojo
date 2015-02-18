#ifndef c_AT_EXECFN_h_
#define c_AT_EXECFN_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_EXECFN =
#ifdef __linux__
 31
#else
#  error
#endif
 ;

__c_namespace_close

#endif
