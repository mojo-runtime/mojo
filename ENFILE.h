#ifndef c_ENFILE_h_
#define c_ENFILE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENFILE =
#ifdef __linux__
 23
#else
#  error
#endif
 ;

__c_namespace_close

#endif
