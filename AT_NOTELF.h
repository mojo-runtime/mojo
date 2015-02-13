#ifndef c_AT_NOTELF_h_
#define c_AT_NOTELF_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_NOTELF =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

__c_namespace_close

#endif
