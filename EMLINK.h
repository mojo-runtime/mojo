#ifndef c_EMLINK_h_
#define c_EMLINK_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EMLINK =
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
