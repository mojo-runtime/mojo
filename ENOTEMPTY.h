#ifndef c_ENOTEMPTY_h_
#define c_ENOTEMPTY_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOTEMPTY =
#ifdef __linux__
 39
#else
#  error
#endif
 ;

__c_namespace_close

#endif
