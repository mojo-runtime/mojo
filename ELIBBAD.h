#ifndef c_ELIBBAD_h_
#define c_ELIBBAD_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ELIBBAD =
#ifdef __linux__
#  ifdef __x86_64__
 80 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
