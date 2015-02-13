#ifndef c_SYS_execve_h_
#define c_SYS_execve_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_execve =
#ifdef __linux__
#  ifdef __x86_64__
 59
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
