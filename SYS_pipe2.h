#ifndef c_SYS_pipe2_h_
#define c_SYS_pipe2_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_pipe2 =
#if defined(__linux__) && defined(__x86_64__)
 293
#else
#  error
#endif
 ;

__c_namespace_close

#endif
