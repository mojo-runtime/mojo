#ifndef _c__SIGALRM_h
#define _c__SIGALRM_h

#include "c/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SignalNumber
SIGALRM =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
