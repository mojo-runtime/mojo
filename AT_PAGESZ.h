#ifndef c_AT_PAGESZ_h_
#define c_AT_PAGESZ_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_PAGESZ
#ifdef __linux__
 6
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
