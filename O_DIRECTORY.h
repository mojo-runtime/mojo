#ifndef c_O_DIRECTORY_h_
#define c_O_DIRECTORY_h_

#include "c/OpenFlags.h"

__c_namespace_open

static
const OpenFlags
O_DIRECTORY =
#ifdef __linux__
#  ifdef __x86_64__
 0200000 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
