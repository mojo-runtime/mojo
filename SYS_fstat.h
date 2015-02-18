#ifndef c_SYS_fstat_h_
#define c_SYS_fstat_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_fstat =
#if defined(__linux__) && defined(__x86_64__)
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
