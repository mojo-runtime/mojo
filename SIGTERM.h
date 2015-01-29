#ifndef _c__SIGTERM_h
#define _c__SIGTERM_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
SIGTERM =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
