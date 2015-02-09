#ifndef c_AT_HWCAP_h_
#define c_AT_HWCAP_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_HWCAP
#ifdef __linux__
 16
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
