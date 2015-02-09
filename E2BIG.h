#ifndef c_E2BIG_h_
#define c_E2BIG_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
E2BIG =
#ifdef __linux__
 7
#else
#  error todo
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
