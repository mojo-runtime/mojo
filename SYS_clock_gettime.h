#ifndef c_SYS_clock_gettime_h_
#define c_SYS_clock_gettime_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_clock_gettime =
#if defined(__linux__) && defined(__x86_64__)
 228
#else
#  error
#endif
 ;

__c_namespace_close

#endif
