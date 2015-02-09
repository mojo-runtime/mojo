#ifndef c_EISDIR_h_
#define c_EISDIR_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EISDIR =
#ifdef __linux__
 21
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
