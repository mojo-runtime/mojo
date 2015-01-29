#ifndef _c__SIGABRT_h
#define _c__SIGABRT_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
SIGABRT =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
