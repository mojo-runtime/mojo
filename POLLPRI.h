#ifndef c_POLLPRI_h_
#define c_POLLPRI_h_

#include "c/PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const PollEvents
POLLPRI =
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
