#ifndef c_AT_EXECFN_h_
#define c_AT_EXECFN_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_EXECFN =
#ifdef __linux__
 31
#else
#  error
#endif
 ;

__c_namespace_close

#endif
