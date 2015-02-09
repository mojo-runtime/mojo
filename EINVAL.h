#ifndef c_EINVAL_h_
#define c_EINVAL_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EINVAL =
#ifdef __linux__
 22
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
