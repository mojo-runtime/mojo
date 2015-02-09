#ifndef c_EFAULT_h_
#define c_EFAULT_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EFAULT =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
