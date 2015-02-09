#ifndef c_SIGTERM_h_
#define c_SIGTERM_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGTERM =
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
