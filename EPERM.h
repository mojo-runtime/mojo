#ifndef c_EPERM_h_
#define c_EPERM_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPERM =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
