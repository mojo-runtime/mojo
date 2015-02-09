#ifndef c_AT_HWCAP2_h_
#define c_AT_HWCAP2_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_HWCAP2 =
#ifdef __linux__
 26
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
