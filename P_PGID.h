#ifndef _c__P_PGID_h
#define _c__P_PGID_h

#include "c/_WaitType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitType
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
