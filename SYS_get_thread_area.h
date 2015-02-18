#ifndef c_SYS_get_thread_area_h_
#define c_SYS_get_thread_area_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_get_thread_area =
#if defined(__linux__) && defined(__x86_64__)
 211
#else
#  error
#endif
 ;

__c_namespace_close

#endif
