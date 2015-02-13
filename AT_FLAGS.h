#ifndef c_AT_FLAGS_h_
#define c_AT_FLAGS_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_FLAGS =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif
