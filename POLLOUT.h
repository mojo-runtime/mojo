#ifndef c_POLLOUT_h_
#define c_POLLOUT_h_

#include "c/PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const PollEvents
POLLOUT =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
