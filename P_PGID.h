#ifndef _c__P_PGID_h
#define _c__P_PGID_h

#include "c/alias/WaitKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitKind
P_PGID =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
