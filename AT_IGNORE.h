#ifndef c_AT_IGNORE_h_
#define c_AT_IGNORE_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_IGNORE =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
