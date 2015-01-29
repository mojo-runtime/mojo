#ifndef _c__P_ALL_h
#define _c__P_ALL_h

#include "c/alias/WaitKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitKind
P_ALL =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
