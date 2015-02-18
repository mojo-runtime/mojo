#ifndef c_EBUSY_h_
#define c_EBUSY_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EBUSY =
#ifdef __linux__
 16
#else
#  error
#endif
 ;

__c_namespace_close

#endif
