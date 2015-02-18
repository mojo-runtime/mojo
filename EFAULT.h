#ifndef c_EFAULT_h_
#define c_EFAULT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EFAULT =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

__c_namespace_close

#endif
