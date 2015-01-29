#ifndef _c__SIGILL_h
#define _c__SIGILL_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
SIGILL =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
