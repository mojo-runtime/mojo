#ifndef c_AT_UID_h_
#define c_AT_UID_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_UID =
#ifdef __linux__
 11
#else
#  error
#endif
 ;

__c_namespace_close

#endif
