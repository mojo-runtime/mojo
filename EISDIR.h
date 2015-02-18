#ifndef c_EISDIR_h_
#define c_EISDIR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EISDIR =
#ifdef __linux__
 21
#else
#  error
#endif
 ;

__c_namespace_close

#endif
