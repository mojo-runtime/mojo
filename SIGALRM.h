#ifndef c_SIGALRM_h_
#define c_SIGALRM_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGALRM =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
