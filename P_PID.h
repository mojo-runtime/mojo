#ifndef _c__P_PID_h
#define _c__P_PID_h

#include "c/_WaitType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitType
P_PID =
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
