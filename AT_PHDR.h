#ifndef c_AT_PHDR_h_
#define c_AT_PHDR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_PHDR =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

__c_namespace_close

#endif
