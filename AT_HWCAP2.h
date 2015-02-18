#ifndef c_AT_HWCAP2_h_
#define c_AT_HWCAP2_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_HWCAP2 =
#ifdef __linux__
 26
#else
#  error
#endif
 ;

__c_namespace_close

#endif
