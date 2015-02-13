#ifndef c_WNOHANG_h_
#define c_WNOHANG_h_

#include "c/WaitFlags.h"

__c_namespace_open

static
const WaitFlags
WNOHANG =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
