#ifndef c_SYS_symlink_h_
#define c_SYS_symlink_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_symlink =
#if defined(__linux__) && defined(__x86_64__)
 88
#else
#  error
#endif
 ;

__c_namespace_close

#endif
