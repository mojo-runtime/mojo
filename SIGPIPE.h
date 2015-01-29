#ifndef _c__SIGPIPE_h
#define _c__SIGPIPE_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
SIGPIPE =
#ifdef __linux__
 13
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
