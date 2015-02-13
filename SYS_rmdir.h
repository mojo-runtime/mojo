#ifndef c_SYS_rmdir_h_
#define c_SYS_rmdir_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_rmdir =
#ifdef __linux__
#  ifdef __x86_64__
 84
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
