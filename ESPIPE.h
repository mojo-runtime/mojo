#ifndef c_ESPIPE_h_
#define c_ESPIPE_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ESPIPE =
#ifdef __linux__
 29
#else
#  error
#endif
 ;

__c_namespace_close

#endif
