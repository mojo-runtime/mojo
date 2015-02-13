#ifndef c_AT_PHNUM_h_
#define c_AT_PHNUM_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_PHNUM =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
