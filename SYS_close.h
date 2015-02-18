#ifndef c_SYS_close_h_
#define c_SYS_close_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_close =
#if defined(__linux__) && defined(__x86_64__)
 3
#else
#  error
#endif
 ;

__c_namespace_close

#endif
