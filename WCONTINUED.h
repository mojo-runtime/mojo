#ifndef c_WCONTINUED_h_
#define c_WCONTINUED_h_

#include "c/WaitFlags.h"

__c_namespace_open

static
const WaitFlags
WCONTINUED =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif
