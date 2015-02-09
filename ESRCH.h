#ifndef c_ESRCH_h_
#define c_ESRCH_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ESRCH =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
