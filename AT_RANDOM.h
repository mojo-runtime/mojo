#ifndef c_AT_RANDOM_h_
#define c_AT_RANDOM_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_RANDOM =
#ifdef __linux__
 25
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
