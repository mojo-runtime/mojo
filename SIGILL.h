#ifndef c_SIGILL_h_
#define c_SIGILL_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGILL =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
