#ifndef c_O_WRONLY_h_
#define c_O_WRONLY_h_

#include "c/OpenFlags.h"

__c_namespace_open

static
const OpenFlags
O_WRONLY =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
