#ifndef c_EXDEV_h_
#define c_EXDEV_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EXDEV =
#ifdef __linux__
 18
#else
#  error
#endif
 ;

__c_namespace_close

#endif
