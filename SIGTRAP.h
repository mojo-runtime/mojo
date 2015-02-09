#ifndef c_SIGTRAP_h_
#define c_SIGTRAP_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGTRAP =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
