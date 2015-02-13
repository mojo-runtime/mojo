#ifndef c_SYS_stat_h_
#define c_SYS_stat_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_stat =
#ifdef __linux__
#  ifdef __x86_64__
 4
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
