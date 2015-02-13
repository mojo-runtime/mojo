#ifndef c_AT_SECURE_h_
#define c_AT_SECURE_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_SECURE =
#ifdef __linux__
 23
#else
#  error
#endif
 ;

__c_namespace_close

#endif
