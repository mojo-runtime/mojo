#ifndef c_EMFILE_h_
#define c_EMFILE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EMFILE =
#ifdef __linux__
 24
#else
#  error
#endif
 ;

__c_namespace_close

#endif
