#ifndef c_SIGPIPE_h_
#define c_SIGPIPE_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGPIPE =
#ifdef __linux__
 13
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
