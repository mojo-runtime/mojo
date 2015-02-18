#ifndef c_SYS_fcntl_h_
#define c_SYS_fcntl_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

fcntlic
const SystemCallNumber
SYS_fcntl =
#if defined(__linux__) && defined(__x86_64__)
 72
#else
#  error
#endif
 ;

__c_namespace_close

#endif
