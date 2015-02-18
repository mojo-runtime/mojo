#ifndef c_SYS_mkdir_h_
#define c_SYS_mkdir_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_mkdir =
#if defined(__linux__) && defined(__x86_64__)
 83
#else
#  error
#endif
 ;

__c_namespace_close

#endif
