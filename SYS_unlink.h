#ifndef c_SYS_unlink_h_
#define c_SYS_unlink_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_unlink =
#if defined(__linux__) && defined(__x86_64__)
 87
#else
#  error
#endif
 ;

__c_namespace_close

#endif
