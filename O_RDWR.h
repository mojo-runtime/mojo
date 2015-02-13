#ifndef c_O_RDWR_h_
#define c_O_RDWR_h_

#include "c/OpenFlags.h"

__c_namespace_open

static
const OpenFlags
O_RDWR =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
