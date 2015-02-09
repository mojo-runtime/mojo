#ifndef c_AT_NOTELF_h_
#define c_AT_NOTELF_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const AuxiliaryVectorType
AT_NOTELF =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
