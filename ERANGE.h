#ifndef c_ERANGE_h_
#define c_ERANGE_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ERANGE =
#ifdef __linux__
 34
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
