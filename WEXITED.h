#ifndef c_WEXITED_h_
#define c_WEXITED_h_

#include "c/WaitFlags.h"

__c_namespace_open

static
const WaitFlags
WEXITED =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
