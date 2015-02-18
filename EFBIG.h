#ifndef c_EFBIG_h_
#define c_EFBIG_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EFBIG =
#ifdef __linux__
 27
#else
#  error
#endif
 ;

__c_namespace_close

#endif
