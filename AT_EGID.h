#ifndef c_AT_EGID_h_
#define c_AT_EGID_h_

#include "c/AuxiliaryVectorType.h"

__c_namespace_open

static
const AuxiliaryVectorType
AT_EGID =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

__c_namespace_close

#endif
