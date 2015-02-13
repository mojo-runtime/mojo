#ifndef c_AT_IGNORE_h_
#define c_AT_IGNORE_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_IGNORE =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
