#ifndef c_EXDEV_h_
#define c_EXDEV_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EXDEV =
#ifdef __linux__
 18
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
