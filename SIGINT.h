#ifndef c_SIGINT_h_
#define c_SIGINT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGINT =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
