#ifndef c_EFBIG_h_
#define c_EFBIG_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EFBIG =
#ifdef __linux__
 27
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
