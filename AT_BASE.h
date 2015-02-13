#ifndef c_AT_BASE_h_
#define c_AT_BASE_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_BASE =
#ifdef __linux__
 7
#else
#  error
#endif
 ;

__c_namespace_close

#endif
