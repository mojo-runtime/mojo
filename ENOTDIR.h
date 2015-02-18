#ifndef c_ENOTDIR_h_
#define c_ENOTDIR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOTDIR =
#ifdef __linux__
 20
#else
#  error
#endif
 ;

__c_namespace_close

#endif
