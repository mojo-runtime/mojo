#ifndef c_SIGKILL_h_
#define c_SIGKILL_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGKILL =
#ifdef __linux__
 9
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
