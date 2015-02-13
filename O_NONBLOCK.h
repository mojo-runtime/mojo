#ifndef c_O_NONBLOCK_h_
#define c_O_NONBLOCK_h_

#include "c/OpenFlags.h"

__c_namespace_open

static
const OpenFlags
O_NONBLOCK =
#ifdef __linux__
#  ifdef __x86_64__
 04000 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
