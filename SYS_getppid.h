#ifndef c_SYS_getppid_h_
#define c_SYS_getppid_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_getppid =
#if defined(__linux__) && defined(__x86_64__)
 110
#else
#  error
#endif
 ;

__c_namespace_close

#endif
