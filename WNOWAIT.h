#ifndef _c__WNOWAIT_h
#define _c__WNOWAIT_h

#include "c/alias/WaitFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitFlags
WNOWAIT =
#ifdef __linux__
 0x1000000
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
