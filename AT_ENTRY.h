#ifndef c_AT_ENTRY_h_
#define c_AT_ENTRY_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_ENTRY =
#ifdef __linux__
 9
#else
#  error
#endif
 ;

__c_namespace_close

#endif
