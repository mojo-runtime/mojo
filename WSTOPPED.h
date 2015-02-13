#ifndef c_WSTOPPED_h_
#define c_WSTOPPED_h_

#include "c/WaitFlags.h"

__c_namespace_open

static
const WaitFlags
WSTOPPED =
#ifdef __linux__
 2 // WUNTRACED
#else
#  error
#endif
 ;

__c_namespace_close

#endif
