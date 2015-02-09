#ifndef c_ENOTBLK_h_
#define c_ENOTBLK_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENOTBLK =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
