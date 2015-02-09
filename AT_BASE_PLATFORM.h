#ifndef c_AT_BASE_PLATFORM_h_
#define c_AT_BASE_PLATFORM_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_BASE_PLATFORM =
#ifdef __linux__
 24
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
