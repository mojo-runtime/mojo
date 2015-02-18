#ifndef c_EINTR_h_
#define c_EINTR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EINTR =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
