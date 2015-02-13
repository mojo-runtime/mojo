#ifndef c_O_RDONLY_h_
#define c_O_RDONLY_h_

#include "c/OpenFlags.h"

__c_namespace_open

static
const OpenFlags
O_RDONLY =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

__c_namespace_close

#endif
