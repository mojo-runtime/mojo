#ifndef c_DT_DIR_h_
#define c_DT_DIR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const char
DT_DIR =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
