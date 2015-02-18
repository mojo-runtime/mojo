#ifndef c_TCSETS_h_
#define c_TCSETS_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
TCSETS =
#ifdef __linux__
 0x5402
#else
#  error
#endif
 ;

__c_namespace_close

#endif
