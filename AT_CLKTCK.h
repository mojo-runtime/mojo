#ifndef c_AT_CLKTCK_h_
#define c_AT_CLKTCK_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_CLKTCK
#ifdef __linux__
 17
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
