#ifndef c_AT_GID_h_
#define c_AT_GID_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_GID =
#ifdef __linux__
 13
#else
#  error
#endif
 ;

__c_namespace_close

#endif
