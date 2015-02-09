#ifndef c_EACCES_h_
#define c_EACCES_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EACCES =
#ifdef __linux__
 13
#else
#  error todo
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
