#ifndef c_ECHILD_h_
#define c_ECHILD_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ECHILD =
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
