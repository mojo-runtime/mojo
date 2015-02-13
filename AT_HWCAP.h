#ifndef c_AT_HWCAP_h_
#define c_AT_HWCAP_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_HWCAP =
#ifdef __linux__
 16
#else
#  error
#endif
 ;

__c_namespace_close

#endif
