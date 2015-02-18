#ifndef c_DT_BLK_h_
#define c_DT_BLK_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const char
DT_BLK =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
