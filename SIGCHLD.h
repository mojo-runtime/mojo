#ifndef c_SIGCHLD_h_
#define c_SIGCHLD_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SignalNumber
SIGCHLD =
#ifdef __linux__
#  ifdef __x86_64__
 17 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
