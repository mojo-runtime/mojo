#ifndef c_AT_EXECFN_h_
#define c_AT_EXECFN_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_EXECFN =
#ifdef __linux__
 31
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
