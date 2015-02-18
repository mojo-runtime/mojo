#ifndef c_DT_CHR_h_
#define c_DT_CHR_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const char
DT_CHR =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
