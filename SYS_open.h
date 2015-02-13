#ifndef c_SYS_open_h_
#define c_SYS_open_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_open =
#ifdef __linux__
#  ifdef __x86_64__
 2
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
