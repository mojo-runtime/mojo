#ifndef c_AT_EXECFD_h_
#define c_AT_EXECFD_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_EXECFD =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
