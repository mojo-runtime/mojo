#ifndef c_SYS_fork_h_
#define c_SYS_fork_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_fork =
#ifdef __linux__
#  ifdef __x86_64__
 57
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
