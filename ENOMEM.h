#ifndef c_ENOMEM_h_
#define c_ENOMEM_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENOMEM =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
