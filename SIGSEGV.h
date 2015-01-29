#ifndef _c__SIGSEGV_h
#define _c__SIGSEGV_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
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
