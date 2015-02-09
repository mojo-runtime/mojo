#ifndef c_SIGINT_h_
#define c_SIGINT_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGINT =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
