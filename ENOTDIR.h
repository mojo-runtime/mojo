#ifndef c_ENOTDIR_h_
#define c_ENOTDIR_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENOTDIR =
#ifdef __linux__
 20
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
