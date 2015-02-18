#ifndef c_ENODEV_h_
#define c_ENODEV_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENODEV =
#ifdef __linux__
 19
#else
#  error
#endif
 ;

__c_namespace_close

#endif
