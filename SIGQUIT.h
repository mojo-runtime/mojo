#ifndef c_SIGQUIT_h_
#define c_SIGQUIT_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGQUIT =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
