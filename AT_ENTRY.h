#ifndef c_AT_ENTRY_h_
#define c_AT_ENTRY_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_ENTRY
#ifdef __linux__
 9
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
