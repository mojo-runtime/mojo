#ifndef c_POLLERR_h_
#define c_POLLERR_h_

#include "c/PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const PollEvents
POLLERR =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
