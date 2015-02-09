#ifndef c_ENODEV_h_
#define c_ENODEV_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENODEV =
#ifdef __linux__
 19
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
