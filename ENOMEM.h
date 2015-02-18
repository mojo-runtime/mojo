#ifndef c_ENOMEM_h_
#define c_ENOMEM_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOMEM =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

__c_namespace_close

#endif
