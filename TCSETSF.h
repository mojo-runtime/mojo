#ifndef c_TCSETSF_h_
#define c_TCSETSF_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
TCSETSF =
#ifdef __linux__
 0x5404
#else
#  error
#endif
 ;

__c_namespace_close

#endif
