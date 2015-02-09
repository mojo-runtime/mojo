#ifndef c_AT_PHNUM_h_
#define c_AT_PHNUM_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_PHNUM
#ifdef __linux__
 5
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
