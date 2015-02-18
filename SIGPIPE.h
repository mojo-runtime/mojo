#ifndef c_SIGPIPE_h_
#define c_SIGPIPE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGPIPE =
#ifdef __linux__
 13
#else
#  error
#endif
 ;

__c_namespace_close

#endif
