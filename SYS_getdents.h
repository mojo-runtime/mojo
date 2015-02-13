#ifndef c_SYS_getdents_h_
#define c_SYS_getdents_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_getdents =
#ifdef __linux__
#  ifdef __x86_64__
 78
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
