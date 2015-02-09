#ifndef c_WNOWAIT_h_
#define c_WNOWAIT_h_

#include "c/WaitFlags.h"

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
