#ifndef c_SYS_getpid_h_
#define c_SYS_getpid_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_getpid =
#if defined(__linux__) && defined(__x86_64__)
 39
#else
#  error
#endif
 ;

__c_namespace_close

#endif
