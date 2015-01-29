#ifndef _c__SIGHUP_h
#define _c__SIGHUP_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
SIGHUP =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
