#ifndef c_AT_EUID_h_
#define c_AT_EUID_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_EUID =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

__c_namespace_close

#endif
