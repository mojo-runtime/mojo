#ifndef c_AT_EGID_h_
#define c_AT_EGID_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_EGID =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

__c_namespace_close

#endif
