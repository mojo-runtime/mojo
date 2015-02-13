#ifndef c_AT_PLATFORM_h_
#define c_AT_PLATFORM_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_PLATFORM =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

__c_namespace_close

#endif
