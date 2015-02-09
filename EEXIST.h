#ifndef c_EEXIST_h_
#define c_EEXIST_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EEXIST =
#ifdef __linux__
 17
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
