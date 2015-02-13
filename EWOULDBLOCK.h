#ifndef c_EWOULDBLOCK_h_
#define c_EWOULDBLOCK_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EWOULDBLOCK =
#ifdef __linux__
#  ifdef __x86_64__
 11 // generic (EAGAIN)
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
