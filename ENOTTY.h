#ifndef c_ENOTTY_h_
#define c_ENOTTY_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOTTY =
#ifdef __linux__
 25
#else
#  error
#endif
 ;

__c_namespace_close

#endif
