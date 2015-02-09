#ifndef c_POLLIN_h_
#define c_POLLIN_h_

#include "c/PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const PollEvents
POLLIN =
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
