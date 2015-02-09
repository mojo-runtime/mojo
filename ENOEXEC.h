#ifndef c_ENOEXEC_h_
#define c_ENOEXEC_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENOEXEC =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
