#ifndef c_SystemCallResult_h_
#define c_SystemCallResult_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#if defined(__linux__) && defined(__x86_64__)
unsigned long
#else
#  error
#endif
SystemCallResult;

__c_namespace_close

#endif
