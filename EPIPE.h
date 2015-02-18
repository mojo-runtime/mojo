#ifndef c_EPIPE_h_
#define c_EPIPE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPIPE =
#ifdef __linux__
 32
#else
#  error
#endif
 ;

__c_namespace_close

#endif
