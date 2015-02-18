#ifndef c_SIGQUIT_h_
#define c_SIGQUIT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGQUIT =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

__c_namespace_close

#endif
