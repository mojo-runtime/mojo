#ifndef c_O_RDWR_h_
#define c_O_RDWR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
O_RDWR =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
