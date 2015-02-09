#ifndef c_EBUSY_h_
#define c_EBUSY_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EBUSY =
#ifdef __linux__
 16
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
