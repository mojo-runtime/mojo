#ifndef c_CLOCK_REALTIME_h_
#define c_CLOCK_REALTIME_h_

#include "c/clockid_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const clockid_t
CLOCK_REALTIME =
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
