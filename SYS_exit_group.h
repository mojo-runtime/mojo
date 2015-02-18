#ifndef c_SYS_exit_group_h_
#define c_SYS_exit_group_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_exit_group =
#if defined(__linux__) && defined(__x86_64__)
 231
#else
#  error
#endif
 ;

__c_namespace_close

#endif
