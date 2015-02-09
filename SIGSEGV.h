#ifndef c_SIGSEGV_h_
#define c_SIGSEGV_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGSEGV =
#ifdef __linux__
 11
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
