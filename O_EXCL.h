#ifndef c_O_EXCL_h_
#define c_O_EXCL_h_

#include "c/OpenFlags.h"

__c_namespace_open

static
const OpenFlags
O_EXCL =
#ifdef __linux__
#  ifdef __x86_64__
 0200 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
