#ifndef c_SIGABRT_h_
#define c_SIGABRT_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGABRT =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
