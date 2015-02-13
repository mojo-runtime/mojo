#ifndef c_AT_CLKTCK_h_
#define c_AT_CLKTCK_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_CLKTCK =
#ifdef __linux__
 17
#else
#  error
#endif
 ;

__c_namespace_close

#endif
