#ifndef _c__SIGSEGV_h
#define _c__SIGSEGV_h

#include "c/alias/SignalNumber.h"

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
