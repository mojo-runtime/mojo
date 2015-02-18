#ifndef c_AT_EXECFD_h_
#define c_AT_EXECFD_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_EXECFD =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
