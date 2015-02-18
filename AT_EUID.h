#ifndef c_AT_EUID_h_
#define c_AT_EUID_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_EUID =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

__c_namespace_close

#endif
