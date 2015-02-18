#ifndef c_WSTOPPED_h_
#define c_WSTOPPED_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
WSTOPPED =
#ifdef __linux__
 2 // WUNTRACED
#else
#  error
#endif
 ;

__c_namespace_close

#endif
