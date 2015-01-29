#ifndef _c__SIGKILL_h
#define _c__SIGKILL_h

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
