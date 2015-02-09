#ifndef c_ETXTBSY_h_
#define c_ETXTBSY_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ETXTBSY =
#ifdef __linux__
 26
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
