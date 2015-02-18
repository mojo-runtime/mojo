#ifndef c_SYS_getgid_h_
#define c_SYS_getgid_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_getgid =
#if defined(__linux__) && defined(__x86_64__)
 104
#else
#  error
#endif
 ;

__c_namespace_close

#endif
