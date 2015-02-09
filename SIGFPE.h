#ifndef c_SIGFPE_h_
#define c_SIGFPE_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGFPE =
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
