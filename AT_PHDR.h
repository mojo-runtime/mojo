#ifndef c_AT_PHDR_h_
#define c_AT_PHDR_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_PHDR =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
