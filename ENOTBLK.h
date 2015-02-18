#ifndef c_ENOTBLK_h_
#define c_ENOTBLK_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOTBLK =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

__c_namespace_close

#endif
